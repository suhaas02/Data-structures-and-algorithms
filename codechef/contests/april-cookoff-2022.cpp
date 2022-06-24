// //april cook off 2022

// //contest link: https://www.codechef.com/COOK140B?order=desc&sortBy=successful_submissions


// //digital sum parities
// #include<bits/stdc++.h>
// using namespace std;
// int getSum(int n)
// {
//     int sum = 0;
//     while (n != 0) {
//         sum = sum + n % 10;
//         n = n / 10;
//     }
//     return sum;
// }
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int sumDig = getSum(n);
//         int num = n;
//         if (((getSum(n) % 2 == 0) && (getSum(n + 1) % 2 == 0)  || (getSum(n) % 2 == 1) && (getSum(n + 1) % 2 == 1)))
//         {
//             num = num + 2;
//         }
//         else if ((getSum(n) % 2 == 0) && (getSum(n + 1) % 2 == 1))
//         {
//             num = num + 1;
//         }
//         cout<<num<<endl;
//     }
//     return 0;
// }

//sticks and rectangles
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
    }
    
}