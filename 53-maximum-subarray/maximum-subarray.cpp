class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int maxSumHere = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            maxSumHere += nums[i];
            if(maxSum < maxSumHere)
                maxSum = maxSumHere;
            if(maxSumHere < 0)
                maxSumHere = 0;
        }
        return maxSum;
    }
};