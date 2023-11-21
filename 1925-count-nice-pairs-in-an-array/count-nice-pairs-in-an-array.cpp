class Solution {
public:
int MOD = 1e9 + 7;

    int reverse(int num){
        int ans = 0;
        while(num > 0){
            int reminder = num % 10;
            ans = (ans*10) + reminder;
            num = num/10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int>mp;
        int n = nums.size();

        for(int i = 0;i< n; i++){
            nums[i] = nums[i] - reverse(nums[i]);
        }

        int result = 0;
        for(int i = 0; i<n; i++){
            result = (result + mp[nums[i]]) % MOD;
            mp[nums[i]]++;
        }
        return result;
    }
};