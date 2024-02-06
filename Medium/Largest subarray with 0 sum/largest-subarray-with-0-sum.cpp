//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   
        // Your code here
        int sum = 0, maxi = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++)
        {
            sum += a[i];
            if(sum == 0)
            {
                maxi = i + 1;
                continue;
            }
            if(mp.find(sum) != mp.end())
            {
                maxi = max(maxi, i - mp[sum]);
                // mp[sum] = i;
            }
            else
                mp[sum] = i;
        }
        return maxi;
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