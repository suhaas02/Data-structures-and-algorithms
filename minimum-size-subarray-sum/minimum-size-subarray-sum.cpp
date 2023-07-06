class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = INT_MAX;
        int n = nums.size();
        int i = 0, j = 0;
        int sum = 0;
        while(j < n)
        {
            sum += nums[j];
            j++;
            while(sum >= target)
            {

                cout<<j - i + 1<<endl;
                len = min(len, j - i);
                sum -= nums[i];
                i++;
            }
            
        }
        if(len == INT_MAX)
            return 0;
        return len;
    }
};