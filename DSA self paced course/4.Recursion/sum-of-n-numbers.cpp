//Sum of N natural numbers using recursion
#include<bits/stdc++.h>
using namespace std;
int printN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    n = n + printN(n - 1);
    return n;
}
int main()
{
    int n;
    cin>>n;
    cout<<printN(n);
    return 0;
}