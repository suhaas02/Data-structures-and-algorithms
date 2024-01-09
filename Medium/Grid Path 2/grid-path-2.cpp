//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int helper(int n, int m, vector<vector<int>> &grid, vector<vector<int>> &dp)
    {
        if(n >= 0 and m >= 0 and grid[n][m] == 1)
            return 0;
        if(n < 0 or m < 0)
            return 0;
        if(n == 0 and m == 0)
            return 1;
        if(dp[n][m] != -1)
            return dp[n][m] % 1000000007;
        int left = 0, up = 0;
        // if(grid[n][m - 1] == 0)
        left = helper(n, m - 1, grid, dp) % 1000000007;
        // if(grid[n - 1][m] == 0)
        up = helper(n - 1, m, grid, dp) % 1000000007;
        return dp[n][m] = (left + up) % 1000000007;
    }
    int totalWays(int n, int m, vector<vector<int>>& grid) {
        // Code here
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return helper(n - 1, m - 1, grid, dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < m; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.totalWays(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends