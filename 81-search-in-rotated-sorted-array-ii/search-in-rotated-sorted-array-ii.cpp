class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(nums[mid] == target)
            {
                return true;
            }
            if(nums[low] == nums[high] and nums[low] != target)
            {
                low++;
                high--;
            }
            else if(nums[low] <= nums[mid])
            {
                if(nums[low] <= target and nums[mid] > target)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            else
            {
                if(nums[mid] < target and nums[high] >= target)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return false;
    }
};