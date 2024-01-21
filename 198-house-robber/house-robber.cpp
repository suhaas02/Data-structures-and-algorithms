class Solution {
public:
    // int helper(vector<int> &nums, int ind, vector<int> &dp)
    // {
    //     if(ind == 0)
    //         return nums[ind];
    //     if(ind < 0)
    //         return 0;
    //     if(dp[ind] != -1)
    //         return dp[ind];
    //     int pick = nums[ind] + helper(nums, ind - 2, dp);
    //     int notPick =  helper(nums, ind - 1, dp);
    //     return dp[ind] = max(pick, notPick);
    // }
    int rob(vector<int>& nums) {
        // int n = nums.size();
        // vector<int> dp(n, -1);
        // return helper(nums, n - 1, dp);

        //trying tabulation approach
        int n = nums.size();
        vector<int> dp(n, 0); 
        dp[0] = nums[0];
        for(int i = 1; i < n; i++)
        {
            int pick = nums[i];
            if(i > 1)
                pick += dp[i - 2];
            int notPick = dp[i - 1];
            dp[i] = max(pick, notPick);
        }
        return dp[n - 1];
    }
};