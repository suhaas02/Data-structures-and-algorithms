class Solution {
public:
    bool helper(int ind,int target,vector<int> &nums,vector<vector<int>> &dp)
    {
        if(target == 0)
            return true;
        if(ind == 0)
            return nums[0] == target;
            if(dp[ind][target] != -1)
                return dp[ind][target];
        bool notTake = helper(ind - 1,target,nums,dp);
        bool take = false;
        if(target >= nums[ind])
        {
            take = helper(ind - 1, target - nums[ind],nums,dp);
        } 
        return dp[ind][target] = take | notTake;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto x : nums)
            sum += x;
        if(sum % 2 != 0)
            return false;
        int target = sum / 2;
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int> (target + 1,-1));
        return helper(n - 1,target,nums,dp);
    }
};