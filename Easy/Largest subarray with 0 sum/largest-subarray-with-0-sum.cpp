//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        // Your code here
        
        //brute force approach 
        // int max_len = 0;
        // for(int i = 0; i < n; i++)
        // {
        //     int sum = 0;
        //     for(int j = i; j < n;j++)
        //     {
        //         sum += arr[j];
        //         if(sum == 0)
        //         {
        //             max_len = max(max_len, j - i + 1);
        //         }
        //     }
            
        // }
        // return max_len;
        
        //approach - 2 //using hashmap
        unordered_map<int,int> preSum;
        int sum = 0, len = 0;
        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
            if(sum == 0)
                len = i + 1;
            if(preSum.find(sum) != preSum.end())
            {
                len = max(len, i - preSum[sum]);
            }
            else
            {
                preSum[sum] = i;
            }
            
        }
        return len;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends