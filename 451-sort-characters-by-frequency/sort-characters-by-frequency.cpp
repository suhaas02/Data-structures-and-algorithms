class Solution {
public:
    static bool cmp(pair<int,int> &a, pair<int,int> &b)
    {
        return a.first > b.first;
    }
    string frequencySort(string s) {
        unordered_map<int,int> mp;
        for(auto x : s)
            mp[x]++;
        string ans;
        vector<pair<int,int>> vec;
        for(auto x : mp)
        {
            vec.push_back({x.second, x.first});
        }
        sort(vec.begin(), vec.end(), cmp);
        for(auto x : vec)
        {
            while(x.first--)
                ans += x.second;
        }
        return ans;
    }
};