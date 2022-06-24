//find all four sum numbers
//problem link: https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  