class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        //replace even numbers with 0 and odd numbers with 1
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] % 2 != 0)
            {
                nums[i] = 1;
            }
            else
                nums[i] = 0;
        }

        //now using the concept of prefix sum to find the number of odd numbers in the array
        unordered_map<int,int> mp;
        int preSum = 0;
        int count = 0;
        mp[0] = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            preSum += nums[i];
            if(mp.find(preSum - k) != mp.end())
                count += mp[preSum - k];
            // count += mp[preSum - k];
            mp[preSum]++;

        }
        return count;
    }
};