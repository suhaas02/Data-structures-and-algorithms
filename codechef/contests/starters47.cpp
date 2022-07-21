//starters 47 codechef contest
//contest link: https://www.codechef.com/START47?itm_medium=hpbanner_2&itm_campaign=START47

//end sorted
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
//         int i;
//         int x,index1,indexn;
//         for ( i = 0; i < n; i++)
//         {
//             cin>>x;
//             if (x == 1)
//             {
//                 index1 = i;
//             }
//             if (x == n)
//             {
//                 indexn = i;
//             }
            
//         }
//         int r = index1 + (n - 1) - indexn;
//         if (index1 < indexn)
//         {
//             cout<<r<<endl;
//         }
//         else
//         {
//             cout<<r - 1<<endl;
//         }
        
        
//     }
//     return 0;
// }




//similar heights
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
//         int a;
//         vector <int> ans;
//         for (int i = 0; i < n; i++)
//         {
//             cin>>a;
//             ans.push_back(a);
//         }
//         unordered_map<int,int> freq;
//         for (int j = 0; j < ans.size(); j++)
//         {
//             freq[ans[j]]++;
//         }
//         int count = 0;
//         for(auto i : freq)
//         {
//             if (i.second == 1)
//             {
//                 count++;
//             }
            
//         }
//         cout<<count<<endl;
        
//     }
//     return 0;
// }


//copy and push back
//problem link: https://www.codechef.com/submit/COPYPUSH
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
        
        bool ans = true;
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                n--;
            }
            else
            {
                int mid = n / 2 - 1;
                if (s.substr(0,mid + 1) == s.substr(mid + 1, n - mid - 1))
                {
                    n = n / 2;
                }
                else
                {
                    ans = false;
                    break;
                }
                
            }
            
        }
        if (ans)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
    }
    return 0;
}
