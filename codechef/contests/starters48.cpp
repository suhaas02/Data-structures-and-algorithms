// //starters 48 

// //make palindrome
// #include<bits/stdc++.h>
// using namespace std;

// string convert(string s, int n)
// {
//     for (int j = 1; j <= n / 2; j++)
//                 {
//                     if (s[j] != s[n - j])
//                     {
//                         s.erase(s.begin() + j);
//                     }
                    
//                 }
//     for (int i = 1; i <= n / 2; i++)
//     {
//         if (s[i] == s[n - i])
//         {
//             return s;
//         }
//         else
//         {
//             convert(s,n);
//         }
                   
//     }
    
    
// }

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
//         for (int i = 1; i <= n / 2; i++)
//         {
//             string temp = s;
//             reverse(temp.begin(),temp.end());
//             if (s == temp)
//             {
//                 cout<<s<<endl;
//             }
//             else
//             {
//                 cout<<convert(s,n);
                
//             }
            
            
            
            
//         }
//         // cout<<"No"<<endl;
//     }
//     return 0;
// }

//fill the grid
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        if (n % 2 == 0 && m % 2 == 0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<abs(m - n) * min(m,n)<<endl;;
        }
        
    }
    return 0;
}