class Solution {
public:

    //this logic is correct, but i am not understanding how to memoize it, without dp, iam getting tle
    // int helper(string s, string t, string ans,int i, int n)
    // {
    //     if(ans == t)
    //         return 1;
    //     if(i == n)
    //         return 0;
    //     ans += s[i];
    //     int pick = helper(s, t, ans, i + 1, n);
    //     ans.pop_back();
    //     int notPick = helper(s, t, ans, i + 1, n);
    //     return pick + notPick;
    // }
    // int numDistinct(string s, string t) {
        // string ans;
        // int n = s.length();
        // return helper(s,t,ans, 0, n);
    // }

    //memoization approach
    // int helper(string s, string t, int n, int m, vector<vector<int>> &dp)
    // {
    //     if(m < 0)
    //         return 1;
    //     if(n < 0)
    //         return 0;
    //     if(dp[n][m] != -1)
    //         return dp[n][m];
    //     if(s[n] == t[m])
    //     {
    //         return dp[n][m] = helper(s, t, n - 1, m  - 1, dp) + helper(s, t, n - 1, m, dp);
    //     }
    //     else
    //         return dp[n][m] = helper(s, t, n - 1, m, dp);
    // }
    int numDistinct(string s, string t)
    {
        // int n = s.length(), m = t.length();
        // vector<vector<int>>dp(n, vector<int> (m, -1));
        // return helper(s, t,n - 1, m - 1, dp);

        //tabulation approach 
        int mod = 1e9+7;

        int n = s.length(), m = t.length();
        vector<vector<int>>dp(n + 1, vector<int> (m + 1, 0));
        for(int i=0;i<= n;i++){
            dp[i][0]=1;
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(s[i - 1] == t[j - 1])
                {
                    dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod;
                }
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[n][m];
    }
};