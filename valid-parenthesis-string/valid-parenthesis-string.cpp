class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open;
        stack<int> star;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
                open.push(i);
            else if(s[i] == '*')
                star.push(i);
            else
            {
                if(!open.empty())
                {
                    open.pop();
                }
                else if(!star.empty())
                {
                    star.pop();
                }
                else 
                    return false;
            }
        }
        while(!open.empty())
        {
            if(star.empty() || open.top() > star.top())
                return false;
            open.pop();
            star.pop();
        }
        return true;
    }
};