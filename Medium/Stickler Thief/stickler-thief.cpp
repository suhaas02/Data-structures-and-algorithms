//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        //Base case
        if(n==0)
            return 0;
        if(n == 1)
            return arr[0];
            

        //An array to store the maximum loot at each house
        int dp[n];
        dp[0] = arr[0];
        dp[1] = max(arr[0], arr[1]);
        
        
        for(int i = 2;i<n;i++){
            // The maximum loot at the current house is the maximum of:
            // 1. Loot at the previous house
            // 2. Loot at the house before the previous house plus the loot at the current house


            dp[i] = max(dp[i-1], dp[i-2] + arr[i]);
        }
        
        return dp[n-1];
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
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends