class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> t1(26,0);
        vector<int> t2(26,0);
        set<char> a1,a2;
        for(char c : word1)
        {
            t1[c - 'a']++;
            a1.insert(c);
        }
        for(char c : word2)
        {
            t2[c - 'a']++;
            a2.insert(c);
        }
        sort(t1.begin(),t1.end());
        sort(t2.begin(),t2.end());
        return t1 == t2 && a1 == a2;
    }
};