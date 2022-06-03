//naive pattern searching algorithm

#include<bits/stdc++.h>
using namespace std;
int patSearch(string txt, string pat)
{
    int m = pat.length();
    int n = txt.length();
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (int j = 0; j < m; j++)
        {
            if (pat[j] != txt[i + j])
            {
                break;
            }
            
        }
        if (j == m)
        {
            cout<<i<<" ";
        }
        
    }
    
}
int main()
{
    string txt,pat;
    cin>>txt>>pat;
    cout<<patSearch(txt,pat);
    return 0;
}