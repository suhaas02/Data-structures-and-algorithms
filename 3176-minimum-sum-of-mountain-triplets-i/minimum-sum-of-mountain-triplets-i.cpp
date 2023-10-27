class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int sum = INT_MAX;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                for(int k = j + 1; k < n; k++)
                {
                    if(nums[i] < nums[j] and nums[k] < nums[j] and nums[i] + nums[j] + nums[k] < sum)
                    {
                       sum = nums[i] + nums[j] + nums[k]; 
                       cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                    }
                }
            }
        }
        if(sum == INT_MAX)
            return -1;
        return sum;
    }
};