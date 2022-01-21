//code drive contest
//contest link: https://www.codechef.com/CDRV21B?order=desc&sortBy=successful_submissions
// //count number of peaks
// #include<bits/stdc++.h>
// typedef long long int ll;
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         ll res = 0;
//         if (n == 3)
//         {
//             cout<<"10"<<endl;
//         }
//         else if (n > 3)
//         {
//             res = pow(3,(n - 3)) * 8 * (n - 2);
//             res = res + res/4;
//             cout<<res<<endl;
//         }
//         else
//         {
//             cout<<"0"<<endl;
//         }
        
//     }
//     return 0;
// }

// //game between friends
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int a,b,c,d;
//         int nith = a, soub = b;
//         cin>>a>>b>>c>>d;
//         if (a < b)
//         {
//             a = a + c;
//         }
//         else if (b < a)
//         {
//             b = b + c;
//         }
//         else
//         {
//             b = b + c;
//         }

//         if (a < b)
//         {
//             a = a + d;
//         }
//         else if (b < a)
//         {
//             b = b + d;
//         }
//         else
//         {
//             b = b + d;
//         }
//         if (a > b)
//         {
//             cout<<"N"<<endl;
//         }
//         else if (a < b)
//         {
//             cout<<"S"<<endl;
//         }
//         else
//         {
//             cout<<"N"<<endl;
//         }
        
//     }
//     return 0;
// }

// //favourite string of chef;
//approach - 1;
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n,icode,ichef;
//         cin>>n;
//         string s;
//         cin>>s;
//         string s1 = "code";
//         string s2 = "chef";
//         for (int i = 0; i < n; i++)
//         {
//             if ((i + 3) <= n && s[i] == 'c' && s[i + 1] == 'o' && s[i + 2] == 'd' && s[i + 3] == 'e')
//             {
//                 icode = i;
//                 break;
//             }
//             if ((i + 3) <= n && s[i] == 'c' && s[i + 1] == 'h' && s[i + 2] == 'e' && s[i + 3] == 'f')
//             {
//                 ichef = i;
//                 break;
//             }
//         }
//         if (icode < ichef)
//         {
//             cout<<"AC"<<endl;
//         }
//         else
//         {
//             cout<<"WA"<<endl;
//         }
//     }
//     return 0;
// }

//approach - 2;
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
//         for (int i = 0; i < n - 3; i++)
//         {
//             string sub = s.substr(i,4);
//             if (sub == "code")
//             {
//                 cout<<"AC"<<endl;
//                 break;
//             }
//             else if (sub == "chef")
//             {
//                 cout<<"WA"<<endl;
//                 break;
//             }
            
//         }
        
//     }
//     return 0;
// }



//again xor problem
// #include<bits/stdc++.h>
// using namespace std;
// void xorProblem(int T)
// {
//     int n,k; 
//     string s;
//     cin>>n>>k>>s;
//     int a[n];
//     a[n] = {0};
//     int sum = 0;
//     for (int i = 0; i < n; i++) 
//     {
//         if(s[i]== '1')
//             sum++;
//         a[i]=sum;
//     }
//     int x = n - k;
//     int ans[k]; 
//     int p = x + 1;
//     ans[0] = a[p-1];
//     for (int i = 1; i < k; i++)
//     {
//        ans [i] = a[i+p-1]-a[i-1];
//     }        
//     int count=0;
//     for (int i = 0; i < k; i++)
//     {
//         if(ans[i]%2 == 1) 
//             count++;
//     }
//     cout << count << endl;
// }


// int main()
// {
//     int t;
//     cin>>t;
//     xorProblem(t);

// }

//count substrings
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
        string s;
        cin>>s;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
            
        }
        cout<<count * (count + 1)/2<<endl;
    }
    return 0;
}