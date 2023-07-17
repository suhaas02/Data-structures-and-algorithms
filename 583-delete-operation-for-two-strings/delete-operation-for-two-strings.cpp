class Solution {
public:
    int minDistance(string word1, string word2) {
        //basic idea is to find the longest substring 
        //and then minus the len of word1 and word2
        //len of word1 + word2 - len of longest subsstsring 
        int n = word1.size(), m = word2.size();
        int ans = 0;
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(word1[i - 1] == word2[j - 1])
                {
                    dp[i][j] =  1 + dp[i - 1][j - 1];
                    ans = max(ans, dp[i][j]);
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        cout<<ans<<endl;
        return n + m - (2 * ans);
    }
};