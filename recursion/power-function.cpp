// //power function
// #include<bits/stdc++.h>
// using namespace std;
// int powerFunction(int x,int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return powerFunction(x, n - 1) * x;
//     }
// }
// int main()
// {
//     int x,n;
//     cin>>x>>n;
//     cout<<powerFunction(x,n)<<endl;
// }

//power logarithmic
#include<bits/stdc++.h>
using namespace std;
int powerLog(int x,int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int xlog = powerLog(x,n/2);
        int xpn = xlog * xlog;
        if (n % 2 == 1)
        {
            xpn = xpn * x;
        }
        return xpn;
    }
    
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<powerLog(x,n);
    return 0;
}