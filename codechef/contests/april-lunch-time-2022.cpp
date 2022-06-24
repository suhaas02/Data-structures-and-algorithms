// //april lunch time 2022
//contest link: https://www.codechef.com/LTIME107C?order=desc&sortBy=successful_submissions

// //mario and bullet 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int x,y,z;
//         cin>>x>>y>>z;
//         int div = y / x;
//         int time  = z - div;
//         if (time > 0)
//         {
//             cout<<time<<endl;
//         }
//         else
//         {
//             cout<<0<<endl;
//         }
        
//     }
//     return 0;
// }

//pair pain
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
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                c1++;
            }
            else if (arr[i] == 2)
            {
                c2++;
            }
            
        }
        long long int ans = c1 * (n - c1) + c1 * (c1 - 1) / 2 + c2 * (c2 - 1) / 2;
        cout<<ans<<endl;
    }
    return 0;
}

// //plaindrome pain
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int x,y;
//         cin>>x>>y;
        
//     }
//     return 0;
// }