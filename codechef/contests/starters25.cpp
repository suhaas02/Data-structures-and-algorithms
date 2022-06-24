//starters 25
//contest link: https://www.codechef.com/START25B?order=desc&sortBy=successful_submissions

//point and lines
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
        set <int> x,y;
        int a,b;
        for (int i = 0; i < n; i++)
        {
            cin>>a>>b;
            x.insert(a);
            y.insert(b);
        }
        for(auto itr = x.begin(); itr != x.end(); itr++)
        {
            if (/* condition */)
            {
                /* code */
            }
            
        }
        
    }
    
}