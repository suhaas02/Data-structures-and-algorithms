//Day - 29
//problem link: https://www.codechef.com/START17C/problems/GCDPRF
//GCD of prefixes
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int b[n + 1];
        for (int i = 1; i <= n; i++){
            cin>>b[i];
        }
        int ok = 1;
        for (int i = 2; i <= n; i++){
            if (b[i - 1] % b[i]){
                ok = 0;
            }
            if (ok){
                for (int i = 1; i <= n; i++){
                    cout<<b[i]<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<"-1"<<endl;
            } 
        }
    }
    return 0;
}