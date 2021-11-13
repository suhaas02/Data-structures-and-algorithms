//hill sequence 
//problem link: https://www.codechef.com/NOV21C/problems/HILLSEQ
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,count = 0;
        bool f = true;
        map<long long int, long long int> lex;
        cin >> n;
        for(int i = 0; i<n; i++)
        {
            int t;
            cin >> t;
            lex[t]++;
        }
        for(auto x: lex)
        {
            auto j = lex.rbegin();
            if(j->second ==2)
            {
                cout << "-1"<<endl;
                f = false;
                break;
            }
            else if(x.second > 2)
            {
                cout << "-1"<<endl;
                f = false;
                break;
            }
        }
        if(f == true)
        {
           for(auto x: lex)
            {
                if(x.second==2) cout << x.first << " ";
            }
            for(auto k = lex.rbegin(); k!=lex.rend(); k++)
            {   
                cout << k->first << " ";
            }  
            cout << endl;
        }
    }
    return 0;
}