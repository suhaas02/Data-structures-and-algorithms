class Solution {
public:
    bool helper(vector<int> &nums, int l, int h, int p1, int p2, int turn, vector<vector<int>> &dp)
    {
        if(l > h)
        {
            if(p1 >= p2)
                return 1;
            else
                return 0;
        }
        if(turn == 0)
            return (helper(nums, l + 1, h, p1 + nums[l], p2, 1, dp) || helper(nums, l, h - 1, p1 + nums[h], p2, 1, dp));
        else
            return (helper(nums,l + 1, h, p1, p2 + nums[l], 0, dp) and helper(nums, l, h - 1, p1, p2 + nums[h], 0, dp));
    }
    bool PredictTheWinner(vector<int>& nums) {
        int l = 0, h = nums.size() - 1;
        vector<vector<int>> dp(nums.size(), vector<int> (nums.size(), -1));
        return helper(nums, l, h, 0, 0, 0, dp);
    }
};