class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto x : arr)
            mp[x]++;
        vector<pair<int,int>> vec;
        for(auto x : mp)
        {
            vec.push_back({x.second, x.first});
        }
        sort(vec.begin(), vec.end());
        for(int i = 0; i < vec.size() - 1; i++)
        {
            if(vec[i].first == vec[i + 1].first)
                return false;
        }
        return true;
    }
};