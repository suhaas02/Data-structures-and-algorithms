//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        int zero=-1,one=-1,two=-1;
        int mini=INT_MAX,maxi=INT_MIN,ans=INT_MAX;
        for(int i=0;i<S.length();i++){
            if(S[i]=='0') zero=i;
            else if(S[i]=='1') one=i;
            else if(S[i]=='2') two=i;
            if(zero==-1||one==-1||two==-1) continue;
            else{
                mini=min(zero,min(one,two));
                maxi=max(zero,max(one,two));
                ans=min(ans,maxi-mini+1);
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends