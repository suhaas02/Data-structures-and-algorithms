//factorial of a number
#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int fac = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         fac = fac * i;
//     }
//     cout<<fac<<endl;
//     return 0;
// }
//time complexity: 0(N);

//recursive approach
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int n;
    cin>>n;
    factorial(n);
    return 0;
}