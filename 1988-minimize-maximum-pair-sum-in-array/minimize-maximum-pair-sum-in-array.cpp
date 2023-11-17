class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        int maxi = 0;
        while(i < j)
        {
            int sum = nums[i] + nums[j];
            maxi = max(sum, maxi);
            i++;
            j--;
        }
        return maxi;
    }
};