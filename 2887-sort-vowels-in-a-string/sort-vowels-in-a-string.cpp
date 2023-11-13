class Solution {
public:
    string sortVowels(string s) {
        vector<int> temp;
        string t;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                temp.push_back(s[i]);
            }
        }
        sort(temp.begin(), temp.end());
        int j = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                t += temp[j];
                j++;
            }
            else
                t += s[i];
        }
        return t;
    }
};