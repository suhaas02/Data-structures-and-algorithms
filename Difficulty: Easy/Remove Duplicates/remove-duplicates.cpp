//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string removeDups(string str) {
        // Your code goes here
        string ans; 
        unordered_map<char, int> mp; 
        for(auto x : str)
        {
            if(mp.find(x) == mp.end())
            {
                ans += x; 
                mp[x]++; 
            }
            else
                mp[x]++; 
        }
        
        // for(auto x : mp)
        //     ans += x.first; 
        return ans; 
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends