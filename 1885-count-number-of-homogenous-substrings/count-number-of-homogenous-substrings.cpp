class Solution {
public:
    int countHomogenous(string s) {
        long long int ans = 0, count = 1;
        char curr = s[0];
        for(int i = 1; i < s.length(); i++)
        {
            if(curr == s[i])
                count++;
            else
            {
                ans += count * (count + 1) / 2;
                count = 1;
                curr = s[i];
            }
        }
        ans += count * (count + 1) / 2;
        return ans % 1000000007;
    }
};