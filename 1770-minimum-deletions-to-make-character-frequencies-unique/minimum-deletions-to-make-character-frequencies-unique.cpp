class Solution {
public:
    int minDeletions(string s) {
        int n = s.length();
        int del = 0;
        int hash[26] = {0};
        for(int i = 0; i < n; i++)
        {
            hash[s[i] - 'a']++;
        }
        map<int,int> mp;
        for(int i = 0; i < 26; i++)
        {
            while(hash[i] > 0 and mp.find(hash[i]) != mp.end())
            {
                del++;
                hash[i]--;
            }
            mp.insert({hash[i], 1});
        }
        return del;
    }
};