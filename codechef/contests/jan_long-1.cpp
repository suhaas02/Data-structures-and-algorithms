//january long challenge - 1;
//keplers law
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int t1,t2,r1,r2;
        cin>>t1>>r1>>t2>>r2;
        if (pow((t1 / t2), 2) == pow((r1 / r2), 3))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
    }
    return 0;
}