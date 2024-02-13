class Solution {
public:
    bool isPalindrome(string s)
    {
        int i = 0, j = s.length() - 1;
        while(i < j)
        {
            if(s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size(); i++)
        {
            string s = words[i];
            if(isPalindrome(s))
            {
                return s;
            }

        }
        return "";
    }
};