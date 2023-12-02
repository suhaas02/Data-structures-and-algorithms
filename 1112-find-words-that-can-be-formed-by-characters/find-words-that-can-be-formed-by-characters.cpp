class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> charCnt(26, 0);
        for(auto x : chars)
            charCnt[x - 'a']++;
        int res = 0;
        for(auto x : words)
        {
            vector<int> cnt(26, 0);
            for(auto y : x)
            {
                cnt[y - 'a']++;
            }
            bool flag = true;
            for(int i = 0; i < 26; i++)
            {
                if(cnt[i] > charCnt[i])
                {
                    flag = false;
                    break;
                }
            }

            if(flag == true)
                res += x.length();
        }
        return res;
    }
};