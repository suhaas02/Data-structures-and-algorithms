class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> ans;
        for(int i = 0; i < strs.size();i++)
        {
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            ans[temp].push_back(strs[i]);
        }
        for(auto p : ans)
        {
            res.push_back(p.second);
        }
        return res;
    }
};