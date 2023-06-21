class Solution {
public:
    int characterReplacement(string s, int k) {
        // char arr[26] = {0};
        // int j = 0, len = 0;
        // for(int i = 0; i < s.length(); i++)
        // {
        //     arr[s[i] - 'a']++;
            
        // }

        int n = s.length();
        int i = 0, j = 0, maxChar = 0, ans = -1;
        unordered_map<char,int> mp;
        while(j < n)
        {
            mp[s[j]]++;
            maxChar = max(maxChar, mp[s[j]]);
            int curr_len = j - i + 1;
            if(curr_len - maxChar > k)
            {
                mp[s[i]]--;
                i++;
            }
            curr_len = j - i + 1;
            ans = max(curr_len, ans);
            j++;
        }
        return ans;

    }
};