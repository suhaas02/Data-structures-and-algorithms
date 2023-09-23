//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        map<int,int> ans;
        for(int i = 0; i < n; i++)
        {
            ans[arr[i]]++;
        }
        vector<int> temp;
        for(auto x : ans)
        {
            if(x.second > 1)
                temp.push_back(x.first);
        }
        if(temp.size() == 0)
            return {-1};
        return temp;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends