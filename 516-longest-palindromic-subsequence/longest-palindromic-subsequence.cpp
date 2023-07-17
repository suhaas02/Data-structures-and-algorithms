class Solution {
public:
    // int helper(string &s,int l, int r, vector<vector<int>> &dp)
    // {
    //     if(l == r)
    //         return 1;
    //     if(l > r)
    //         return 0;
    //     if(dp[l][r] != -1)
    //         return dp[l][r];
    //     if(s[l] == s[r])
    //     {
    //         return dp[l][r] = 2 + helper(s, l + 1, r - 1, dp);
    //     }
    //     else
    //     {
    //         return dp[l][r] = max(helper(s,l + 1, r, dp), helper(s, l, r - 1, dp));
    //     }
    // }
    int longestPalindromeSubseq(string s) {
        // int n = s.length();
        // if(n == 1)
        //     return n;
        // vector<vector<int>> dp(n, vector<int> (n, -1));
        // return helper(s,0, n - 1,dp);
        string t = s;
        reverse(t.begin(), t.end());
        int n = s.length();
        vector<vector<int>> dp(n + 1, vector<int> (n + 1, 0));
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(s[i - 1] == t[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[n][n];
    }
}; 