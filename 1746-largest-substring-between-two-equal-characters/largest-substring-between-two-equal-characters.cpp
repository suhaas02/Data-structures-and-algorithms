class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int i = 0;
        unordered_map<char,int> mp;
        int maxi = 0;
        for(int j = 0; j < s.length(); j++)
        {
            if(mp.find(s[j]) != mp.end())
            {
                maxi = max(j - mp[s[j]], maxi);
                i = j;
            }
            else
                mp[s[j]] = j;
        }
        return maxi - 1;
    }
};