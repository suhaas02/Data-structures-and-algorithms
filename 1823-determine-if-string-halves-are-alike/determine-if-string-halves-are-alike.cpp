class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        //for first half
        int v1 = 0, c1 = 0;
        for(int i = 0; i < n / 2; i++)
        {
            if((s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u') or (s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U'))
            {
                v1++;
            }
            else
                c1++;
        }
        //for 2nd half
        int c2 = 0, v2 = 0;
        for(int i = n / 2; i < n; i++)
        {
            if((s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u') or (s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U'))
            {
                v2++;
            }
            else
                c2++;
        }
        if(v1 == v2 and c1 == c2)
            return true;
        return false;
    }
};