//power set using bitwise operators
#include<bits/stdc++.h>
using namespace std;
void powerSet(string s)
{
    int n = s.length();
    int powSize = pow(2,n);
    for (int counter = 0; counter < powSize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            if (counter & (1 << j) != 0)
            {
                cout<<s[j];
            }
            
        }
        cout<<endl;
    }
    
}
int main()
{
    string s;
    cin>>s;
    powerSet(s);
    return 0;
}