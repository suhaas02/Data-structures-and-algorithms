//checking if a string is a palindrome using recursion
#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s,int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    return (s[start] == s[end]) && palindrome(s,start + 1, end - 1);
}
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    cout<<palindrome(s,0,n - 1)<<endl;
    return 0;
}