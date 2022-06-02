//naive pattern search
#include<bits/stdc++.h>
using namespace std;
void searchPat(string str, string pat)
{
    int lstr = str.length();
    int lpat = str.length();
    if (lstr < lpat)
    {
        cout<<"N0"<<endl;
    }
    else
    {
        if (str.find(pat) != string::npos)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
    }
    
}
int main()
{
    string str,pat;
    cin>>str>>pat;
    searchPat(str,pat);
    return 0;
}