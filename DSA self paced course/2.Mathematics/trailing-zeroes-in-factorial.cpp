//trailing zeroes in factorial
//we are given a number N, our task is to find out the number of trailing zeroes in the factorial N;
#include<bits/stdc++.h>
using namespace std;
int CountTrailingZeroes(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + n / i;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<CountTrailingZeroes(n);
    return 0;
}