class Solution {
public:
    void dfs(vector<vector<char>> &board, vector<vector<int>> &vis, int i, int j, int n, int m)
    {
        // if(i < 0 or i > n or j < 0 or j > m)
        //     return;
        
        vis[i][j] = 1;
        int delRow[] = {-1, 0, +1, 0};
        int delCol[] = {0, +1, 0, -1};
        for(int k = 0; k < 4; k++)
        {
            int row = i + delRow[k];
            int col = j + delCol[k];
            if(row >= 0 and row < n and  col >= 0 and col < m and !vis[row][col] and board[row][col] == 'O')
                dfs(board, vis, row, col, n, m);
        }
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int> (m, 0));
        
        //first we need to traverse the boundaries, do dfs and mark it as visited
        //rows traversal
        for(int i = 0; i < m; i++)
        {
            if(!vis[0][i] and board[0][i] == 'O')
            {
                dfs(board, vis, 0, i, n, m);
            }
            if(!vis[n - 1][i] and board[n - 1][i] == 'O')
            {
                dfs(board, vis, n - 1, i, n, m);
            }
        }

        //now for columns
        for(int i = 0; i < n; i++)
        {
            if(board[i][0] == 'O')
            {
                dfs(board, vis, i, 0, n, m);
            }
            if(board[i][m - 1] == 'O')
            {
                dfs(board, vis, i, m - 1, n, m);
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(board[i][j] == 'O' and vis[i][j] == 0)
                    board[i][j] = 'X';
            }
        }
    }
};