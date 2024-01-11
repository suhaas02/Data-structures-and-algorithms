class Solution {
public:
    static bool cmp(pair<int,int> &a, pair<int,int> &b)
    {
        if(a.first == b.first)
        {
            return a.second < b.second;
        }
        return a.first > b.first;
    }
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>> vec;
        for(int i = 0; i < nums.size(); i++)
        {
            vec.push_back({nums[i], i});
        }
        sort(vec.begin(), vec.end(), cmp);
        map<int,int> mp;
        for(auto x : vec)
        {
            mp[x.second] = x.first;
            k--;
            if(k == 0)
                break;
        }
        vector<int> ans;
        for(auto x : mp)
            ans.push_back(x.second);
        return ans;

    }
};