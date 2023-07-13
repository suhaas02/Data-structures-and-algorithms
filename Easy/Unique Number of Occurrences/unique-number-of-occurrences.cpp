//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        map<int, int> freq;
        for(int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }
        vector<int> ans;
        for(auto it : freq)
        {
            ans.push_back(it.second);
        }
        sort(ans.begin(), ans.end());
        for(int i = 1; i < ans.size();i++)
        {
            if(ans[i - 1] == ans[i])
                return false;
        }
        return true;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends