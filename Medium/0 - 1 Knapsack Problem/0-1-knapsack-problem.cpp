//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int helper(int w, int wt[], int val[], int ind, vector<vector<int>> &dp)
    {
        if(ind == 0)
        {
            if(wt[0] <= w)
                return val[0];
            else
                return 0;
        }
        if(dp[ind][w] != -1)
            return dp[ind][w];
        int notPick = 0 + helper(w, wt, val, ind - 1, dp);
        int pick = INT_MIN;
        if(wt[ind] <= w)
        {
            pick = val[ind] + helper(w - wt[ind], wt, val, ind - 1, dp);
        }
        return dp[ind][w] = max(pick, notPick);
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       //same as pick and notPick
       vector<vector<int>> dp(n, vector<int> (W + 1, -1));
       return helper(W, wt, val, n - 1, dp);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends