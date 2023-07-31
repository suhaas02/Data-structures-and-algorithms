class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int totAsc = 0;
        for(int i = 0; i < s1.length(); i++)
        {
            totAsc += (int)s1[i];
        }

        for(int i = 0; i < s2.length(); i++)
        {
            totAsc += (int)s2[i];
        }
        
        int n = s1.length(), m = s2.length();
        vector<vector<int>> dp(n + 1, vector<int> (m + 1, 0));
        //making the dp table
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] = s1[i - 1] + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        int ans = dp[n][m];
        return totAsc - 2 * ans;
        //now finding the string
        // string ans = "";
        // int len = dp[n][m];
        // for(int i = 1; i <= len;i++)
        // {
        //     ans += "#";
        // }
        // int ind = len - 1;
        // while(n > 0 and m > 0)
        // {
        //     if(s1[n - 1] == s2[m - 1])
        //     {
        //         ans[ind] = s1[n - 1];
        //         n--;
        //         m--;
        //         ind--;
        //     }
        //     else if(s1[n - 1] > s2[m - 1])
        //         n--;
        //     else
        //         m--;
        //     // else
        //     // {
        //     //     if(dp[n - 1][m] > dp[n][m - 1])
        //     //     {
                    
        //     //         n--;
        //     //     }
        //     //     else if(dp[n][m - 1] > dp[n - 1][m])
        //     //     {
                    
        //     //         m--;
        //     //     }
        //     // }
        // }
        // reverse(ans.begin(), ans.end());
        // cout<<ans<<endl;
        // int temp = 0;
        // for(int i = 0; i < ans.length(); i++)
        // {
        //     temp += (int)ans[i];
        // }
        // cout<<temp<<endl;
        // return totAsc - 2 * temp;
    }
};