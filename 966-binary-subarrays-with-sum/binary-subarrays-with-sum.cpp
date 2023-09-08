class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        //next idea is to use the concept of prefix sum;
        int preSum = 0;
        map<int,int> mp;
        int cnt = 0;
        mp[0] = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            preSum += nums[i];
            int rem = preSum - goal;
            cnt += mp[rem];
            mp[preSum] += 1;
        }
        return cnt;
    }
};