class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = 0;
        for(int i = 0;i < s.length(); i++)
        {
            if(s[i] == '1')
                ones++;
            s[i] = '0';
        }
        int first = 0;
        if(ones > 1)
        {
            first = ones - 1;
        }
        for(int i = 0; i < first; i++)
        {
            s[i] = '1';
        }
        int n = s.length();
        s[n - 1] = '1';
        return s;
    }
};