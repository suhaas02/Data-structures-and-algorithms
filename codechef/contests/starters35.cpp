// //starters 35


// //dark light
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--){
        
//         int n,k;
//         cin>>n>>k;
//         if (k == 0)
//         {
//             if (n % 4)
//             {
//                 cout<<"On"<<endl;
//             }
//             else
//             {
//                 cout<<"Off"<<endl;
//             }
            
//         }
//         if (k == 1)
//         {
//             if (n % 4)
//             {
//                 cout<<"Ambiguous"<<endl;
//             }
//             else
//             {
//                 cout<<"On"<<endl;
//             }
            
//         }
        
//     }
//     return 0;
// }

//admins and shopping 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        int cap[n];
        for (int i = 0; i < n; i++)
        {
            cin>>cap[i];
        }
        for (int j = 0; j < n; j++)
        {
            if (cap[j] < x)
            {
                cap[j] = ceil(x / cap[j]);
            }
            else
            {
                cap[j] = 1;
            }
            
        }
        int maxi = cap[0];
        for (int i = 0; i < n; i++)
        {
            if (maxi < cap[i])
            {
                maxi = cap[i];
            }
            
        }
        int ans = max(maxi,n);
        cout<<ans<<endl;
    }
    return 0;
}