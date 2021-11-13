// //Day - 11
// //problem link: https://www.codechef.com/NOV21C/problems/CHEAPFUEL
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--){
//         int x,y,a,b,k;
//         cin>>x>>y>>a>>b>>k;
//         while (k--){
//             x = x + a;
//             y = y + a;
//         }
//         if (x > y){
//             cout<<"PETROL"<<endl;
//         }
//         else if(x < y){
//             cout<<"DIESEL"<<endl;
//         }
//         else{
//             cout<<"SAME PRICE"<<endl;
//         }     
//     }
//     return 0;
// }

// //Equal coins.
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         ll x,y;
//         cin>>x>>y;
//         if (x == 0 && y % 2 == 0){
//             cout<<"Yes"<<endl;
//             continue;
//         }
//         else if (x == 0 && y % 2 != 0){
//             cout<<"No"<<endl;
//             continue;
//         }
//         if ((x + y*2) % 2 ==0){
//             cout<<"Yes"<<endl;
//         }
//         else{
//             cout<<"No"<<endl;
//         }   
//     }
//     return 0;
// }

