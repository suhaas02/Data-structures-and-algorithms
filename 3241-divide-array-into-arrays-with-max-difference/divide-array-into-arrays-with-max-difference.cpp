class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            temp.push_back(nums[i]);
            mini = min(mini, nums[i]);
            maxi = max(maxi, nums[i]);
            if(temp.size() == 3)
            {
                if(maxi - mini <= k)
                {
                    ans.push_back(temp);
                    mini = INT_MAX;
                    maxi = INT_MIN;
                    temp.clear();
                }
                else
                {
                    return {};
                }
            }
        }
        return ans;
    }
};