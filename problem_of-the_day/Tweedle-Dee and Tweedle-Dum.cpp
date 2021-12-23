//Problem of the day
//Problem link: https://www.codechef.com/problems/TWEED
//Codechef: Tweedle-Dee and Tweedle-Dum 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--){
        int n;
        string p;
        cin>>n>>p;
        int a[n];
        for (int i = 0; i < n; i++){
            cin>>a[i];
        }
        if(n==1 && p[1]=='e' && a[0]%2==0)
            cout<<"Dee\n";
        else
            cout<<"Dum\n";
    }
    return 0;
}