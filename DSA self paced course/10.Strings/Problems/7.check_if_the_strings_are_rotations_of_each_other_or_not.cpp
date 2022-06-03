//program to check if the strings are rotations of each other or not
#include<bits/stdc++.h>
using namespace std;
int stringRot(string str, string fstr)
{
    string fin = str + str;
    if (fin.find(fstr) != string::npos)
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
    string str,fstr;
    cin>>str>>fstr;
    cout<<stringRot(str,fstr);
    return 0;
}