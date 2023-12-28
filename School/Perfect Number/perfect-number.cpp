//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isPerfect(int N) {
        // code here
        unordered_map<int,int> mp;
        mp[0] = 1;
        mp[1] = 1;
        mp[2] = 2;
        mp[3] = 6;
        mp[4] = 24;
        mp[5] = 120;
        mp[6] = 720;
        mp[7] = 5040;
        mp[8] = 40320;
        mp[9] = 362880;
        int temp = N;
        int sum = 0;
        while(temp)
        {
            int t = temp % 10;
            sum += mp[t];
            temp = temp / 10;
        }
        if(N == sum)
            return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isPerfect(N) << "\n";
    }
}

// } Driver Code Ends