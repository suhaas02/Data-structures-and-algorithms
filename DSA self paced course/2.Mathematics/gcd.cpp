//finding GCD of 2 numbers
#include<bits/stdc++.h>
using namespace std;
// //naive approach
// int gcd(int a,int b)
// {
//     int res = min(a,b);
//     while (res > 0)
//     {
//         if (a % res == 0 && b % res == 0)
//         {
//             break;
//         }
//         res--;
//     }
//     return res;
// }

//better approach --> euclidean algorithm
int gcd(int a,int b)
{
    // while (a != b)
    // {
    //     if (a > b)
    //     {
    //         a = a - b;
    //     }
    //     else
    //     {
    //         b = b - a;
    //     }
        
    // }
    // return a;

    //optmized
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
    
}
int main()
{
    int a,b;
    cin>>a>>b;
    gcd(a,b);
    return 0;
}

