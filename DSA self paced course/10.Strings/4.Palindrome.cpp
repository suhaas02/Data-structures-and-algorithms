//program to check whether a string is palindrome or not

//naive approach
//tc: 0(N), space: 0(N)
#include<bits/stdc++.h>
using namespace std;
// bool isPal(string str)
// {
//     string rev = str;
//     reverse(rev.begin(), rev.end());
//     if (rev == str)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
    
// }
// int main()
// {
//     string str;
//     cin>>str;
//     cout<<isPal(str);
//     return 0;
// }

//efficient approach

bool isPal(string str)
{
    int len = str.length();
    int h = len - 1;
    int l = 0;
    while (h > l)
    {
        if (str[l] != str[h])
        {
            return false;
        }
        else
        {
            h--;
            l++;
        }
            
    }
    return true;
}

int main()
{
    string str;
    cin>>str;
    cout<<isPal(str);
    return 0;
}

//tc: 0(N);, space: 0(N)