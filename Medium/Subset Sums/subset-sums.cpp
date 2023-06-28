//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void helper(int ind, vector<int> &arr, vector<int> &ans, int sum, int n)
    {
        if(ind == n)
        {
            ans.push_back(sum);
            return;
        }
        
        //pick and not pick conditions;
        sum += arr[ind];
        helper(ind + 1, arr, ans, sum, n);
        sum -= arr[ind];
        helper(ind + 1, arr, ans, sum, n);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        int sum = 0;
        helper(0, arr, ans, sum, N);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends