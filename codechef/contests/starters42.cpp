// //starters 24
////contest link: https://www.codechef.com/START24B?order=desc&sortBy=successful_submissions


// //Avoid contact
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int x,y;
//         cin>>x>>y;
//         if (x == 0)
//         {
//             cout<<x<<endl;
//         }
//         else if (x > y)
//         {
//             cout<<(x + y)<<endl;
//         }
//         else if (x = y)
//         {
//             cout<<(x + y - 1)<<endl;
//         }
        
//     }
//     return 0;
// }

//Yet another contructive problem 

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int x;
//         cin>>x;
//         int a,b,c;
//         int ans = ((a || b) && (b || c) && (c || a));
        
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// void solve() {
//     ll x;
//     cin>>x;
//     ll a = x,b = 0,c = x;
//     for(ll i=0;i<31;i++) {
//         if(!(c&((ll)1<<i))) {
//             c = c | ((ll)1<<i);
//             break;
//         }
//     }
//     cout<<a<<" "<<b<<" "<<c<<"\n";
// }

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }


//anti palindrome
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
//         string p = s;
//         reverse(p.begin(),p.end());
//         sort(p.begin(),p.end());
//         if (p != s)
//         {
//             cout<<"Yes"<<endl;
//             cout<<p<<endl;
//         }
//         else
//         {
//             cout<<"No"<<endl;
//         }
        
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solve(){
//     ll i,j,k,l,p,q,n;
//     cin>>n;
//     string s;
//     cin>>s;
//     if(n%2==1){
//         cout<<"NO\n";
//         return;
//     }
//     map<char,int>m;
//     vector<pair<int,char>>v;
//     for(i=0;i<n;i++)
//         m[s[i]]++;
//     for(auto x: m){
//         v.push_back(make_pair(x.second,x.first));
//     }
    
//     sort(v.begin(),v.end());
//     string r="";
//     for(i=0;i<v.size();i++){
//         p=v[i].first;
//         if(p>(n/2)){
//             cout<<"NO\n";
//             return;
//         }
        
//         for(j=0;j<p;j++){
//             r+=v[i].second;
//         }
//     }
//     j=n/2;
//     i=0;
//     j--;
//     char c;
//     while(i<j){
//         c=r[i];
//         r[i]=r[j];
//         r[j]=c;
//         i++;j--;
//     }
//     cout<<"YES\n"<<r<<"\n";
    
// }

// int main()
// {
    
//     ll t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

//divisiors and reciprocals
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,a,b;
        cin>>x>>a>>b;
        int rem = a % b;
        int quo = a / b;
        int n1 = rem/b;
        if (rem != 0 && (b/rem) > quo)
        {
            
            cout<<(b/rem)<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
        
    }
    return 0;
}