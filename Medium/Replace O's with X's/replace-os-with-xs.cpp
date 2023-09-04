//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void dfs(vector<vector<int>> &vis, vector<vector<char>> &mat, int i, int j)
    {
        vis[i][j] = 1;
        int delRow[] = {-1, 0, +1, 0};
        int delCol[] = {0, +1, 0, -1};
        for(int k = 0; k < 4; k++)
        {
            int row = i + delRow[k];
            int col = j + delCol[k];
            if(row >= 0 && row < mat.size() && col >= 0 && col < mat[0].size() && !vis[row][col] && mat[row][col] == 'O')
                dfs(vis, mat, row, col);
        }
        
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        //'o' that are on the boundary, aren't gonna be replaced with 'x';
        //just traverse on the 4 boundaries, if there are any o's found, they cant be converted to x
        //from thr boundary, if there are any o's forming a chain, they also can't changed to x
        vector<vector<int>> vis(n, vector<int> (m, 0));
        //traversing columns
        for(int i = 0; i < n; i++)
        {
            if(!vis[i][0] and mat[i][0] == 'O')
            {
                dfs(vis, mat, i, 0);
            }
            if(!vis[i][m - 1] and mat[i][m - 1] == 'O')
            {
                dfs(vis, mat, i, m - 1);
            }
        }
        
        //traversing rows
        for(int j = 0; j < m; j++)
        {
            if(!vis[0][j] and mat[0][j] == 'O')
            {
                dfs(vis, mat, 0, j);
            }
            if(!vis[n - 1][j] and mat[n - 1][j] == 'O')
            {
                dfs(vis, mat, n - 1, j);
            }
        }
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(vis[i][j] == 0 and mat[i][j] == 'O')
                    mat[i][j] = 'X';
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends