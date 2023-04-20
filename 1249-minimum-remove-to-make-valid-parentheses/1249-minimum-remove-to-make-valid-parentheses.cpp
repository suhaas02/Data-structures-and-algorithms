class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> temp;
        int n = s.length() - 1;
        string ans;
        for(int i = 0; i < s.length();i++)
        {
            if(s[i] == '(')
            {
                temp.push(i);
                // ans += s[i];
            }
            else if(s[i] == ')' )
            {
                if(temp.empty())
                    s[i] = '#';
                else
                    temp.pop();
            }
        }
        while(!temp.empty())
        {
            s[temp.top()] = '#';
            temp.pop();
        }
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] != '#')
                ans.push_back(s[i]);
        }
        return ans;
    }
};