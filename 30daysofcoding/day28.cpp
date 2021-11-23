// //day - 28 //codechef starters-18
// //problem link: https://www.codechef.com/START18C/problems/MINDAYSRET
// //Back to campus
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--){
//         int n,k;
//         cin>>n>>k;
//         if (n % k == 0){
//             cout<<n/k<<endl;
//         }
//         else{
//             cout<<(n/k + 1)<<endl;
//         }
//     }
//     return 0;
// }

//Day -28 //starters 18 #codechef
//problem link: https://www.codechef.com/START18C/problems/MAKEEQUAL
//Make them equal
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin>>a[i];
        }
        int maxx = *max_element(a.begin(), a.end());
        int ans = 0;
        for(auto x : a){
            ans = max(ans,maxx - x);
        }
        cout<<ans<<endl;
    }
    return 0;
}