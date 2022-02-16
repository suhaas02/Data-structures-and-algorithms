//counting set bits in a number
#include<bits/stdc++.h>
using namespace std;
int setBits(int n)
{
    int res = 0;
    while (n > 0)
    {
        if(n % 2 != 0)
        {
            res++;
        }
        n = n / 2;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<setBits(n);
    return 0;
}
//time complexity: 0(no. of bits in number)
