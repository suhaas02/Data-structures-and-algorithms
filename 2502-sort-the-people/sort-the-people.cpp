class Solution {
public:
    static bool cmp(pair<string, int> &a, pair<string, int> &b)
    {
        return a.second > b.second;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>> pairs;
        vector<string> ans;
        for(int i = 0; i < names.size(); i++)
        {
            pairs.push_back({names[i], heights[i]});
        }
        sort(pairs.begin(), pairs.end(), cmp);
        for(auto x : pairs)
        {
            ans.push_back(x.first);
        }
        return ans;
    }
};