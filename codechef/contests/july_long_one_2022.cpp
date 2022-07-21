//july long challenge one 2022
//contest link: https://www.codechef.com/JULY221C?order=desc&sortBy=successful_submissions


//pass the exam 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int a,b,c;
//         cin>>a>>b>>c;
//         if (a + b + c >= 100 && a >= 10 && b >= 10 && c >= 10)
//         {
//             cout<<"Pass"<<endl;
//         }
//         else
//         {
//             cout<<"Fail"<<endl;
//         }
        
//     }
//     return 0;
// }

//chef and candies
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n,x;
//         cin>>n>>x;
//         int rem = n - x;
//         if (x >= n)
//         {
//             cout<<0<<endl;
//             //break;
//         }
//         else
//         {
//             if (rem % 4 == 0)
//             {
//                 cout<<(rem / 4)<<endl;
//             }
//             else
//             {
//                 cout<<(rem / 4) + 1<<endl;
//             }
            
            
//         }
        
        
//     }
//     return 0;
// }

// //slow solution 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int maxT,maxN,sumN;
//         cin>>maxT>>maxN>>sumN;       
//     }
//     return 0;
// }

//game of piles verison 1
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
        
        int sum = 0;
        //sort(arr,arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1 || arr[i] % 2 == 1)
            {
                cout<<"chef"<<endl;
                break;
            }
            else
            {
                cout<<"chefina"<<endl;
            }
            
        }
        
        
    }
    return 0;
}