//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestOnes(int n, vector<int>& nums, int k) {
        // Code here
        int i = 0, res = 0, zero = 0;
        for(int j = 0; j < nums.size(); j++)
        {
            if(nums[j] == 0)
                zero++;
            while(zero > k)
            {
                if(nums[i] == 0)
                {
                    zero--;
                    
                }
                i++;
            }
            res = max(res,j - i + 1);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.longestOnes(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends