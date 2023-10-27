class Solution {
public:
    int minimumSum(vector<int>& nums) {
        //efficient approach 
        int sum = 0;
        int minSum = INT_MAX;
        int n = nums.size();
        vector<int> left(n, 0), right(n, 0);
        left[0] = nums[0];
        for(int i = 1; i < n; i++)
        {
            left[i] = min(left[i - 1], nums[i]);
        }

        //similarly for right
        right[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; i--)
        {
            right[i] = min(right[i + 1], nums[i]);
        }

        for(int i = 1; i < n - 1; i++)
        {
            if(nums[i] > left[i] and nums[i] > right[i])
            {
                sum = left[i] + right[i] + nums[i];
                minSum = min(minSum, sum);
            }
        }
        if(minSum == INT_MAX)
            return -1;
        return minSum;
    }
};