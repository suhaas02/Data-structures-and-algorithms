//squid game
//red light , green light
//contest link: https://www.codechef.com/RLGL2022?order=desc&sortBy=successful_submissions


//fence the field
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int x,y,n,k;
//         cin>>x>>y>>n>>k;
//         int steel = 2 * n * (x + y) * k;
//         cout<<steel<<endl;
//     }
//     return 0;
// }


//grass the ground
// #include<bits/stdc++.h>
// using namespace std;
// #define M_PI_8 3.14 / 8
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int x,y;
//         cin>>x>>y;
//         int area = (M_PI_8 * x * x) +(x * y); 
//         cout<<area<<endl;
//     }
    
    
// }

//help player 456
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         string str;
//         cin>>str;
//         int lstr = str.length();
//         // sort(str.begin(),str.end());
//         int count = 1;
//         int i = 1;
//         for (; i < lstr; i++)
//         {
//             if (str[i] == str[i - 1])
//             {
//                 count++;
//             }
//             else if (count > 1){
//                 cout << str[i - 1] << count;
//                 count = 1;
//             }
//             else{
//                 cout << str[i - 1];
//             }   
//         }
//         if (count > 1){
//             cout << str[i - 1] << count;
//             count = 1;
//         }
//         else if (i - 1 < str.length()){
//             cout << str[i - 1];
//         } 
//         return 0;

//     }
    
// }


// //staircase
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
//         if (n == 1)
//         {
//             cout<<'1'<<endl;
//         }
//         else if (n == 2)
//         {
//             cout<<'2'<<endl;
//         }
//         else
//         {
            
//         }
        
//     }
    
// }


//range queries
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n], prefix[n];
    cin >> arr[0];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        cin>>arr[i];
        prefix[i] = prefix[i - 1] + arr[i];
    }
    int q;
    cin>>q;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        cout << prefix[r] - prefix[l] << "\n";
        
    }
    return 0;
}

// //minimum count 
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

//     }
    
// }