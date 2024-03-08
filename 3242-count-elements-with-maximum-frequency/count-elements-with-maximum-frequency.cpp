class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxi = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
            // maxi = max(maxi, mp[nums[i]]);
        }
        for(auto x : mp)
        {
            maxi = max(maxi, x.second);
        }
        int count = 0;
        for(auto x : mp)
        {
            if(x.second == maxi)
            {
                count += maxi;
            }
        }
        return count;
    }
};