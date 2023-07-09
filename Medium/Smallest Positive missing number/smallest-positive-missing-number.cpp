//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        // vector<int> temp;
        // for(int i = 0; i < n; i++)
        // {
        //     if(arr[i] > 0)
        //     {
        //         temp.push_back(arr[i]);
        //     }
        // }
        // int maxi = 0;
        // for(int i = 0; i < temp.size(); i++)
        // {
        //     if(temp[i] > maxi)
        //         maxi = temp[i];
        // }
        // int sum = 0;
        // for(auto x : temp)
        //     sum += x;
        // return (maxi * (maxi + 1)) / 2 - sum;
        
        vector<bool> mark(n + 1, false);
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > 0 and arr[i] <= n)
                mark[arr[i]] = true;
        }
        for(int i = 1; i <= n; i++)
        {
            if(!mark[i])
                return i;
        }
        return n + 1;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends