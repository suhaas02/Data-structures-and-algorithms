class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x : nums)
        {
            mp[x]++;
        }
        int count = 0;
        for(auto x : mp)
        {
            if(x.second == 1)
                return -1;
            count += ceil(x.second * 1.0/3);
        }
        return count;
    }
};