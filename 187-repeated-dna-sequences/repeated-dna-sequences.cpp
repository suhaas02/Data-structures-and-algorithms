class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> mp;
        vector<string> ans;
        int len = s.length();
        for(int i = 0; i <= len - 10; i++)
        {
            string temp = s.substr(i, 10);
            mp[temp]++;
        }
        for(auto x : mp)
        {
            if(x.second > 1)
                ans.push_back(x.first);
        }
        return ans;
    }
};