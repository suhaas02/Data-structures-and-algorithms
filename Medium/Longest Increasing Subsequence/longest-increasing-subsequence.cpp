//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    // int helper(int ind, int a[], int prev, vector<vector<int>> &dp)
    // {
    //     if(ind < 0)
    //         return 0;
    //     int take = 0;
    //     if(dp[ind][prev + 1] != -1)
    //         return dp[ind][prev + 1];
    //     if(prev == -1 or a[prev] > a[ind])
    //     {
    //         take = 1 + helper(ind - 1, a, ind, dp);   
    //     }
    //     int notTake = helper(ind - 1, a, prev,dp);
    //     return dp[ind][prev + 1] = max(take , notTake);
    // }
    int longestSubsequence(int n, int a[])
    {
       // your code here
    //   int prev = -1;
    //   vector<vector<int>> dp(n, vector<int> (n + 1, -1));
    //   return helper(n - 1, a, prev, dp);
    
        // vector<vector<int>> dp(n + 1, vector<int> (n + 1, 0));
        // for(int ind = 0; ind <= n; ind++)
        // {
        //     for(int prev = -1; prev <= n - 2; prev++)
        //     {
        //         int take = 0;
        //         if(prev == -1 or a[prev] < a[ind])
        //         {
        //             take = 1 + dp[ind + 1][ind + 1];
        //         }
        //         int notTake = dp[ind + 1][prev + 1];
        //         dp[ind][prev + 1] = max(take, notTake);
        //     }
        // }
        // return dp[n][n];
        
        // vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    
        // for(int ind = n-1; ind>=0; ind --){
        //     for (int prev_index = ind-1; prev_index >=-1; prev_index --){
                
        //         int notTake = 0 + dp[ind+1][prev_index +1];
        
        //         int take = 0;
        
        //         if(prev_index == -1 || nums[ind] > nums[prev_index]){
                    
        //             take = 1 + dp[ind+1][ind+1];
        //         }
        
        //         dp[ind][prev_index+1] = max(notTake,take);
                
        //     }
        // }
        
        // return dp[0][0];
        
        //whatever solution i am writing , i am getting tle, so now we need to use the concept of binary
        //search to find the lis;
        
        vector<int> temp;
        temp.push_back(a[0]);
    
        for(int i = 1; i < n; i++) 
        {
            auto ind = lower_bound(temp.begin(), temp.end(), a[i]);
            if(ind != temp.end())
                temp[ind - temp.begin()] = a[i];
            else
                temp.push_back(a[i]);
        }
        
        return temp.size();
    
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends