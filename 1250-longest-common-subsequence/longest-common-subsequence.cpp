class Solution {
public:
    // int helper(int l1, int l2, string &text1, string &text2, vector<vector<int>> &dp)
    // {
    //     if(l1 < 0 or l2 < 0)
    //         return 0;
    //     if(dp[l1][l2] != -1)
    //         return dp[l1][l2];
    //     if(text1[l1] == text2[l2])
    //     {
    //         return dp[l1][l2] = 1 + helper(l1 - 1, l2 - 1, text1, text2, dp);
    //     }
    //     return dp[l1][l2] = max(helper(l1 - 1, l2, text1, text2, dp), helper(l1, l2 - 1, text1, text2, dp));
    // }
    int longestCommonSubsequence(string text1, string text2) {
        // int l1 = text1.size();
        // int l2 = text2.size();
        // vector<vector<int>> dp(l1, vector<int> (l2, -1));
        // return helper(l1 - 1, l2 - 1, text1, text2, dp);

        int l1 = text1.size();
        int l2 = text2.size();
        vector<vector<int>> dp(l1 + 1, vector<int> (l2 + 1, -1));
        //here we need to shift the index by 1 place, because we cant keep the array index as -1;'
        for(int i = 0; i <= l1; i++)
        {
            dp[i][0] = 0;
        }
        for(int i = 0; i <= l2; i++)
        {
            dp[0][i] = 0;
        }

        for(int i = 1; i <= l1; i++)
        {
            for(int j = 1; j <= l2; j++)
            {
                if(text1[i - 1] == text2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[l1][l2];
    }
};