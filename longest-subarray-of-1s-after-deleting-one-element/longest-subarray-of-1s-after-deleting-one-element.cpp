class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0, zero = 0, ans = 0;
        for(int j = 0; j < n; j++)
        {
            if(nums[j] == 0)
                zero++;
            while(zero > 1)
            {
                if(nums[i] == 0)
                    zero--;
                i++;
            }
            ans = max(ans, j - i + 1 - zero);
        }
        if(ans == n)
            return ans - 1;
        return ans;
    }
};