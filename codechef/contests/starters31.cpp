// //starters - 31 codechef
// //contest link: https://www.codechef.com/START31B?order=desc&sortBy=successful_submissions

// //alternative string 
// //problem link: https://www.codechef.com/START31B/problems/ALTSTR
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int  n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int ones = 0, zeroes = 0, ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == '1')
//             {
//                 ones++;
//             }
//             else
//             {
//                 zeroes++;
//             }
//         }
//         ans = 2 * min(zeroes,ones) + (zeroes != ones);
//         cout<<ans<<endl;
//     }
//     return 0;

// }


// //sign moves
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     int pos = 0;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int ans = (n + 1)/2;
//         if (n % 2 == 1)
//         {
//             cout<<-ans<<endl;
//         }
//         else
//         {
//             cout<<ans<<endl;
//         }
        
//     }
//     return 0;
// }

// //the unchanging OR
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int x = log2(n);
//         cout<<n - x - 1<<endl;
//     }
//     return 0;
// }

//XOR and AND
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
        int a = 0, b = n - 1;
        int count  = 0;
        for (int j = 0; j < n; j++)
        {
            if ((a < b) & (arr[a] ^ arr[b] < arr[a] & arr[b]))
            {
                count++;
                a++;
                b--;
            }
            
        }
        cout<<count<<endl;
    }
    return 0;
}