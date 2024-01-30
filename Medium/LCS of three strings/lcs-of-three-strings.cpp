//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int helper(string a, string b, string c, int l1, int l2, int l3, vector<vector<vector<int>>> &dp)
        {
            if(l1 < 0 or l2 < 0 or l3 < 0)
                return 0;
            if(dp[l1][l2][l3] != -1)
                return dp[l1][l2][l3];
            if(a[l1] == b[l2] and b[l2] == c[l3])
            {
                return dp[l1][l2][l3] = 1 + helper(a, b, c, l1 - 1, l2 - 1, l3 - 1, dp);
            }
            return dp[l1][l2][l3] = max(helper(a, b, c, l1 - 1, l2, l3, dp), max(helper(a, b, c, l1, l2 - 1, l3, dp), helper(a, b, c, l1, l2, l3 - 1, dp)));
        }
        int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
        {
            // your code here
            vector<vector<vector<int>>> dp(n1, vector<vector<int>>(n2, vector<int>(n3, -1)));
            return helper(A, B, C, n1 - 1, n2 - 1, n3 - 1, dp);
            
        }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        Solution obj;
        cout << obj.LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends