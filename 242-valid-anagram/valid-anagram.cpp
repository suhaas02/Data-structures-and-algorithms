class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        for(auto x : s)
            mp[x]++;
        for(auto x : t)
        {
            if(mp[x] == 0)
                return false;
            else
                mp[x]--;
            
            if(mp[x] == 0)
                mp.erase(x);
        }
        if(mp.size() != 0)
            return false;
        return true;
    }
};