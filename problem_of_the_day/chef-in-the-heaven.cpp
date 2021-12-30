//chef in the heaven
//problem link: https://www.codechef.com/problems/CCHEAVEN
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int l,good = 0,bad = 0;
        string s;
        cin>>l>>s;
        bool pass = false;
        for (int i = 0; i < l; i++){
            if (s[i] == '1')
                good++;
            else
                bad++;
            if (good >= bad)
                pass = true;
        }
        if (pass)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}