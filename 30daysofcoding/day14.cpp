// //Day - 14, Topic: Maps
// //problem link: https://www.hackerrank.com/challenges/cpp-maps/problem
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int t; 
//     cin>>t;
//     map <string,int> m; 
//     while(t--) {
//         int q,n; 
//         string s; 
//         cin>>q;
//         cin>>s; 
//         switch(q) {
//             case 1: 
//                 cin>>n; m[s]+=n; 
//                 break; 
//             case 2: 
//                 m.erase(s); 
//                 break; 
//             case 3: 
//                 cout<< m[s] << endl; 
//         }
//     }
//     return 0;      
// }

//day - 14 
//problem link: https://www.codechef.com/NOV21C/problems/XOREQN
//November long challenge
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int j = 0; j < n; j++)
        {
            (arr[j] + x) ^ (arr[j + 1] + x) == 0;
        }
        
    }
    
}