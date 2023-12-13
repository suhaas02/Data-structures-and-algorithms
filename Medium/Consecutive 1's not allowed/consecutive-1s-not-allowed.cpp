//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
    // #define ll long long
    ll solve(int n,vector<int>&mp){
        if(n == 1)
            return 2;
        if(n == 2)
            return 3;
        if(mp[n] != -1){
            return mp[n];
        }
        int pick = 1+solve(n-2,mp);
        int notpick = solve(n-1,mp);
        return mp[n] = (pick+notpick-1)% 1000000007;
    }
    ll countStrings(int n) {
       //vector<int> mp(n+1,-1);
       //return solve(n,mp);
       
       //vector<int> mp(n+1,0);
       //mp[1] = 2;
       //mp[2] = 3;
       //for(int   i = 3; i<=n; i++){
       //    int pick = 1+mp[i-2];
       //    int notpick = mp[i-1];
       //    mp[i] = (pick+notpick-1)% 1000000007;
       //}
       //return mp[n];
       if(n==1)
            return 2;
       int prev1 = 2;
       int prev2 = 3;
       for(int i = 3; i<=n; i++){
           int pick = 1+prev1;
           int notpick = prev2;
           int curr = (pick+notpick-1)% 1000000007;
           prev1 = prev2;
           prev2 = curr;
       }
       return prev2;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends