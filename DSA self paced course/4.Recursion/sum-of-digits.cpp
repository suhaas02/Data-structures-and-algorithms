//sum of digits using recursion
#include<bits/stdc++.h>
using namespace std;
int sumDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int last = n % 10;
    int rem = n / 10;
    return sumDigits(rem) + last;
}
int main()
{
    int n;
    cin>>n;
    cout<<sumDigits(n)<<endl;
    return 0;
}