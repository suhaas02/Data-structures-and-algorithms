class Solution {
public:
    void dfs(int row, int col, vector<vector<int>>& grid, vector<vector<int>>& vis, int delRow[], int delCol[]) {
    int n = grid.size();
    int m = grid[0].size();
    vis[row][col] = 1;

    for (int i = 0; i < 4; i++) {
        int nrow = row + delRow[i];
        int ncol = col + delCol[i];

        // Check if the neighboring cell indices are within valid range
        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1 && vis[nrow][ncol] == 0) {
            dfs(nrow, ncol, grid, vis, delRow, delCol);
        }
    }
}

    int numEnclaves(vector<vector<int>>& grid) {
        //first thing what we need to do is to traverse all the boundaries and then do dfs on eac boundary point and mark every element on the path
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int> (m, 0));
        //traversing the rows
        int delRow[] = {-1, 0, +1, 0};
        int delCol[] = {0, +1, 0, -1};
        for(int i = 0; i < m; i++)
        {
            if(grid[0][i] == 1 and vis[0][i] == 0)
            {
                dfs(0, i, grid, vis, delRow, delCol);
            }
            if(grid[n - 1][i] == 1 and vis[n - 1][i] == 0)
                dfs(n - 1, i, grid, vis, delRow, delCol);
        }

        //travresing the columns
        for(int i = 0; i < n; i++)
        {
            if(grid[i][0] == 1 and vis[i][0] == 0)
                dfs(i, 0, grid, vis, delRow, delCol);
            if(grid[i][m - 1] == 1 and vis[i][m - 1] == 0)
                dfs(i, m - 1, grid, vis, delRow, delCol);
        }

        //now count the number of ones that are unmarked
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == 1 and vis[i][j] == 0)
                    count++;
            }
        }
        return count;
    }
};