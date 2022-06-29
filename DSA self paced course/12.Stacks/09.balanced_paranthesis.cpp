//balanced paranthesis

#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string str)
{
    stack <int> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            s.push(str[i]);
        }
        else if (str[i] == ')' && !s.empty() && s.top() == '(')
        {
            s.pop();
        }
        else if (str[i] == ']' && !s.empty() && s.top() == '[')
        {
            s.pop();
        }
        else if (str[i] == '}' && !s.empty() && s.top() == '{')
        {
            s.pop();
        }
        else
        {
            return false;
        }
        
        
    }
    return s.empty();
}


int main()
{
    string str;
    cin>>str;
    cout<<isBalanced(str)<<endl;
    return 0;
}