//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    set<int> st(a, a + n);
    int count = 2;
    if(n < 2 or st.size() == 1)
        return {-1, -1};
    vector<int> ans;
    for(auto x : st)
    {
        if(count != 0)
        {
            ans.push_back(x);
            count--;
        }
        else
            break;
    }
    return ans;
}