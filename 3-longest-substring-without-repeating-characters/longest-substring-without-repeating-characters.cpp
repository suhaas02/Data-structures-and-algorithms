class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> mp;
        int l = 0, r = 0;
        int n = s.length();
        int maxi = 0;
        while(r < n)
        {
            mp[s[r]]++;
            while(mp[s[r]] > 1)
            {
                mp[s[l]]--;
                l++;
            }
            maxi = max(maxi, r - l + 1);
            r++;
        }
        return maxi;
    }
};