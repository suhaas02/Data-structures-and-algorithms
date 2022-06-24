// //starters 41

// //equal integers
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        int diff;
        cin>>x>>y;
        if (x == y)
        {
            cout<<"0"<<endl;
        }
        else if ((x - y)%2 == 0)
        {
            cout<<(y - x)/2<<endl;
        }
        else
        {
            cout<<2 + (x - y)/2<<endl;
            
        }
        
    }
    return 0;
}

