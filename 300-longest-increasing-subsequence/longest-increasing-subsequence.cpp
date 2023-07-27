class Solution {
public:
    // int helper(vector<int> &nums, int ind, int n, int prevInd, vector<vector<int>> &dp)
    // {
    //     if(ind == n)
    //         return 0;
    //     if(dp[ind][prevInd + 1] != -1)
    //         return dp[ind][prevInd + 1];
    //     int notPick = helper(nums, ind + 1, n, prevInd, dp);
    //     int pick = INT_MIN;
    //     if(prevInd == -1 or nums[ind] > nums[prevInd])
    //     {
    //         pick = 1 + helper(nums, ind + 1, n, ind, dp);
    //     }
    //     return dp[ind][prevInd + 1] = max(pick, notPick);
    // }
    int lengthOfLIS(vector<int>& nums) {
        // int n = nums.size();
        // vector<vector<int>> dp(n, vector<int> (n + 1, -1));
        // return helper(nums, 0, n, -1, dp);

        int n = nums.size();
        // vector<vector<int>> dp(n, vector<int> (n + 1, 0));
        // for(int ind = n - 1; ind >= 0; ind--)
        // {
        //     for(int prevInd = ind - 1; prevInd >= -1; prevInd--)
        //     {
        //         int notPick = dp[ind + 1][prevInd];
        //         int pick = INT_MIN;
        //         if(prevInd == -1 or nums[ind] > nums[prevInd])
        //         {
        //             pick = 1 + dp[ind + 1][ind + 1];
        //         }
        //         dp[ind][prevInd + 1] = max(notPick, pick);

        //     }
        // }
        

        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    
        for(int ind = n-1; ind>=0; ind --){
            for (int prev_index = ind-1; prev_index >=-1; prev_index --){
                
                int notTake = 0 + dp[ind+1][prev_index +1];
        
                int take = 0;
        
                if(prev_index == -1 || nums[ind] > nums[prev_index]){
                    
                    take = 1 + dp[ind+1][ind+1];
                }
        
                dp[ind][prev_index+1] = max(notTake,take);
                
            }
        }
        
        return dp[0][0];
    }
};

