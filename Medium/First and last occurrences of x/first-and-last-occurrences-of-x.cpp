//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
{
    // code here
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            v.push_back(i);   
            break;
        }
        
    }
    
    for (int j = n - 1; j > 0; j--)
    {
        if (arr[j] == x)
        {
            v.push_back(j);
            break;
        }
    }
    if (v.empty())
    {
        return {-1, -1};
    }
    else
    {
        return v;
    }
}
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends