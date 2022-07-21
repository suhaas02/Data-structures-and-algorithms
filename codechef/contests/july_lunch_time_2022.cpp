// //july lunch time contest 2022
// //contest link: https://www.codechef.com/LTIME110B?order=desc&sortBy=successful_submissions


// //easy pronunciation
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
//         string s;
//         cin>>s;
//         int count = 0;
//         int maxi = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
//             {
//                 count++;
//             }
//             else
//             {
//                 count = 0;
//             }
//             maxi = max(maxi,count);
//         }
//         if (maxi >= 4)
//         {
//             cout<<"No"<<endl;
//         }
//         else
//         {
//             cout<<"Yes"<<endl;
//         }
        
    
//     }
//     return 0;
    
// }

// //yet another palindrome
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
//         string s;
//         cin>>s;
//         string a,b;
//         for (int i = 0; i < n; i += 2)
//         {
//             a += s[i];
//         }
//         for (int i = 1; i < n; i += 2)
//         {
//             b += s[i];
//         }
//         sort(a.begin(),a.end());
//         sort(b.begin(), b.end());
//         if (a == b)
//         {
//             cout<<"Yes"<<endl;
//         }
//         else
//         {
//             cout<<"No"<<endl;
//         }
        
//     }
//     return 0;
// }

//maximum median matching 
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
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin>>b[j];
        }
        int start = (n - 1) / 2;
        int end = n - 1;
        sort(a,a + n);
        sort(b , b + n);
        int median = INT_MAX;
        for (int i = start; i < n; i++)
        {
            median = min(median, a[i] + b[end]);
            end--;
        }
        cout<<median<<endl;   
    }
    return 0;
}