class Solution {
public:
    int helper(vector<int> &nums, int ind, int n, int prevInd, vector<vector<int>> &dp)
    {
        if(ind == n)
            return 0;
        if(dp[ind][prevInd + 1] != -1)
            return dp[ind][prevInd + 1];
        int notPick = helper(nums, ind + 1, n, prevInd, dp);
        int pick = INT_MIN;
        if(prevInd == -1 or nums[ind] > nums[prevInd])
        {
            pick = 1 + helper(nums, ind + 1, n, ind, dp);
        }
        return dp[ind][prevInd + 1] = max(pick, notPick);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int> (n + 1, -1));
        return helper(nums, 0, n, -1, dp);
    }
};

