//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        unordered_map<char,int> mp;
        for(auto x : string2)
            mp[x]++;
        string ans;
        for(auto x : string1)
        {
            if(mp.find(x) == mp.end())
                ans += x;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}

// } Driver Code Ends