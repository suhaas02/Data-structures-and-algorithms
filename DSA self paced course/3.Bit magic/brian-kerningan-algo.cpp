//brain kerningam's algorithm
#include<bits/stdc++.h>
using namespace std;
void setBits(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        res++;
    }
    cout<<res<<endl;
}
int main()
{
    int n;
    cin>>n;
    setBits(n);
    return 0;
}