class Solution {
public:
    int solve(vector<int> &nums, int i, int n, vector<int> &dp)
    {
        if(i > n)
            return 0;
        if(dp[i] != -1)
            return dp[i];
                    
        int inc = nums[i] + solve(nums, i + 2, n, dp);
        int exc = solve(nums, i + 1, n, dp);

        return dp[i] = max(inc, exc);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return nums[0];


        vector<int>dp(n, -1);
        int ans1 = solve(nums, 0, n - 2, dp);

        vector<int>dp1(n, -1);
        int ans2 = solve(nums, 1, n - 1, dp1);
        
        return max(ans1, ans2);
    }
};