// //day-27 //codechef starters 17
// //problem link: https://www.codechef.com/START17C/problems/CHEFVACATION
// //Chef on vacation,
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
//         if (x + y <= z){
//             cout<<"Yes"<<endl;
//         }
//         else{
//             cout<<"No"<<endl;
//         }
//     }
//     return 0;
// }

//day - 27 //codechef starters 17
//problem link: https://www.codechef.com/START17C/problems/NEWPIECE
//new piece
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--){
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        if (a == p && b == q){
            cout<<'0'<<endl;
        }
        else if ((a + b) % 2 != (p + q) % 2){
            cout<<'1'<<endl;
        }
        else{
            cout<<'2'<<endl;
        }
    }
    return 0;
}