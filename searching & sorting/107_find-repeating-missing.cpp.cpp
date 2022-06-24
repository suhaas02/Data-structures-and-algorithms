//find missing and repeating element.cpp
//problem link: https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
     vector <int> findTwoElement(int *arr, int n) {
        vector <int> v;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] ^ arr[i + 1] == 0)
            {
                v.push_back(arr[i] - 1);
                v.push_back(arr[i]);
            }
            
        }
        return v;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  