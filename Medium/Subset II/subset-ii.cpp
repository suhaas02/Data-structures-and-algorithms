//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
    void helper(int ind, vector<int> &ds, set<vector<int>> &temp, int n, vector<int> &nums)
    {
        if(ind == n)
        {
            temp.insert(ds);
            return;
        }
        ds.push_back(nums[ind]);
        helper(ind + 1, ds, temp, n, nums);
        ds.pop_back();
        helper(ind + 1, ds, temp, n, nums);

    }
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        // Write your code here
        vector<int> ds;
        set<vector<int>> temp;
        sort(nums.begin(), nums.end());
        helper(0, ds, temp, nums.size(), nums);
        vector<vector<int>> ans(temp.begin(), temp.end());

        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;
        vector<vector<int>> ans = obj.printUniqueSubsets(nums);
        sort(ans.begin(), ans.end());
        //   printAns(ans);
        cout << "[ ";
        for (int i = 0; i < ans.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < ans[i].size(); j++) cout << ans[i][j] << " ";
            cout << "]";
        }
        cout << " ]\n";

        // cout<< "~\n";
    }

    return 0;
}

// } Driver Code Ends