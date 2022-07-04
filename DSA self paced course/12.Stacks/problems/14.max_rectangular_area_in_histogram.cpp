//maximum rectangular area in histogram

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            int curr = arr[i];
            for (int j = i - 1; j >= 0; j--)
            {
                if (arr[j] >= arr[i])
                {
                    curr = curr + arr[i];
                }
                else
                {
                    break;
                }
                
            }
            for (int k = i + 1; k < n; k++)
            {
                if (arr[k] >= arr[i])
                {
                    curr += arr[i];
                }
                else
                {
                    break;
                }
                
            }
            res = max(curr,res);
        }
        return res;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends