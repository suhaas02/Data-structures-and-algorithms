class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int n = nums.size();
        int ones = 0, zero = 0, len = 0;
        while(j < n)
        {
            // if(nums[j] == 1)
            // {
            //     ones++;
            // }
            if(nums[j] == 0)
                zero++;
            while(zero > k)
            {
                if(nums[i] == 0)
                    zero--;
                i++;
            }
            len = max(len, j - i + 1);
            j++;
        }
        return len;
    }
};