class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = 0;
        unordered_map<int,int> ans;
        for(auto x : nums)
            ans[x]++;
        for(auto x : ans)
        {
            if(x.second == 1)
                n = x.first;
        }
        return n;
    }
};