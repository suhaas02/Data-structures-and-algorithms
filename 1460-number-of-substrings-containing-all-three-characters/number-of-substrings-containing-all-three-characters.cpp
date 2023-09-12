class Solution {
public:
    int numberOfSubstrings(string s) {
        int i = 0;
        int count = 0;
        unordered_map<char,int> mp;
        for(int j = 0; j < s.length(); j++)
        {
            mp[s[j]]++;
            while(mp.size() == 3)
            {
                //here we are doing s.length() - j, because consider abcabc, we are at index 3, as the i pointer is not moving, so n - j gives the number of possible substrings
                count += s.length() - j;  
                mp[s[i]]--;
                if(mp[s[i]] == 0)
                {
                    mp.erase(s[i]);
                }
                i++;
            }
        }
        return count;
    }
};