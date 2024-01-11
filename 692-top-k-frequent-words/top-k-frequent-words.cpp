class Solution {
public:
    static bool cmp(pair<string,int> &a, pair<string, int> &b)
    {
        if(a.second == b.second)
        {
            return a.first < b.first;
        }
        return a.second > b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for(auto x : words)
        {
            mp[x]++;
        }
        vector<pair<string,int>> vec;
        for(auto x : mp)
        {
            vec.push_back({x.first, x.second});
        }
        sort(vec.begin(), vec.end(), cmp);
        vector<string> ans;
        for(auto x : vec)
        {
            ans.push_back(x.first);
            k--;
            if(k == 0)
                break;
        }
        return ans;
    }
};