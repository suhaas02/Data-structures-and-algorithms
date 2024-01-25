class Solution {
public:
    // int helper(string text1, string text2, int l1, int l2, vector<vector<int>> &dp)
    // {
    //     if(l1 < 0 or l2 < 0)
    //         return 0;
    //     if(dp[l1][l2] != -1)
    //         return dp[l1][l2];
    //     if(text1[l1] == text2[l2])
    //     {
    //         return dp[l1][l2] = 1 + helper(text1, text2, l1 - 1, l2 - 1, dp);
    //     }
    //     return dp[l1][l2] = max(helper(text1, text2, l1 - 1, l2, dp), helper(text1, text2, l1, l2 - 1, dp));
    // }
    int longestCommonSubsequence(string text1, string text2) {
        // int l1 = text1.length(), l2 = text2.length();
        // vector<vector<int>> dp(l1, vector<int> (l2, -1));
        // return helper(text1, text2, l1 - 1, l2 - 1, dp);
        

        //tabulation approach 
        int l1 = text1.size(), l2 = text2.size();
        vector<vector<int>> dp(l1 + 1, vector<int>(l2 + 1, 0));
        for(int i = 1; i <= l1; i++)
        {
            for(int j = 1; j <= l2; j++)
            {
                if(text1[i - 1] == text2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[l1][l2];
    }
};