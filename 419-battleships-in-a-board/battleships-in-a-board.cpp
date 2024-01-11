class Solution {
public:
    void dfs(int i, int j, vector<vector<char>> &board, vector<vector<int>> &vis)
    {
        vis[i][j] = 1;
        int row[] = {1,0,-1,0};
        int col[] = {0,-1,0,1};
        for(int k = 0; k < 4; k++)
        {
            int r = i + row[k];
            int c = j + col[k];
            if(r < board.size() and c < board[0].size() and r >= 0 and c >= 0 and !vis[r][c] and board[r][c] == 'X')
                dfs(r,c,board,vis);
        }
    }
    int countBattleships(vector<vector<char>>& board) {
        //idea is to solve this question using dfs;
        //so first thing is to we need to store the cell coordinates that has the battleship
        int n = board.size();
        int m = board[0].size();
        vector<pair<int,int>> ship;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(board[i][j] == 'X' and !vis[i][j])
                {
                    count++;
                    dfs(i,j, board, vis);
                }
            }
        }
        return count;
    }
};