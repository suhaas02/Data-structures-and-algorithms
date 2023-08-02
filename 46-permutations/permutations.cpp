
class Solution {
public: 
    void helper(vector<vector<int>> &ans, vector<int> &temp, vector<int> &freq, vector<int> &nums)
    {
        if(temp.size() == nums.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(!freq[i])
            {
                temp.push_back(nums[i]);
                freq[i] = 1;
                helper(ans, temp, freq, nums);
                temp.pop_back();
                freq[i] = 0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> freq(nums.size(), 0);
        helper(ans, temp, freq, nums);
        return ans;
    }
};