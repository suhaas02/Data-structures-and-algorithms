//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
        reverse(str.begin(), str.end());
    int num = 0;
    int n = str.length();
    for (int i = 0; i < n; i++) {
        if (str[i] == '1') {
            int power = pow(2, i);
            num += power;
        }
    }
    return num;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends