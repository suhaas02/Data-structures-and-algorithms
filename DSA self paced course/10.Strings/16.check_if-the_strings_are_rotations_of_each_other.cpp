//program to check if the strings are rotations of each other
#include<bits/stdc++.h>
using namespace std;
int areRot(string s1,string s2)
{
    string temp = s1 + s1;
    if (temp.find(s2) != string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<areRot(s1,s2);
    return 0;
}