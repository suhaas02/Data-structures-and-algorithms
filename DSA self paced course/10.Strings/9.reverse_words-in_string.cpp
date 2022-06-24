#include<bits/stdc++.h>

using namespace std;
void reverseString(string str)
{
    int start = 0;
    int n = str.length();
    for (int end = 0; end < n; end++)
    {
        if (str[end] == ' ')
        {
            reverse(str,start,end - 1);
            start = end + 1;
        }
        
    }
    reverse(str,start, n - 1);
    reverse(str,0,n - 1);
}
int main()
{
    string str;
    getline(cin,str);
    cout<<reverseString(str);
    return 0;
}