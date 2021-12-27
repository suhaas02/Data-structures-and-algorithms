//day - 18, topic: arrays
//problem link: https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1
//Maximum product subarray
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    if(n == 0)
        return -1;
        long long maxPro = arr[0];
        long long mini = arr[0];
        long long maxi = arr[0];
        for (int i = 1; i < n; i++){
            if (arr[i] < 0){
                swap(maxi,mini);
            }
            maxi = max((long long)arr[i],maxi*arr[i]);
            mini = min((long long)arr[i],mini*arr[i]);
            maxPro = max(maxPro,maxi);
        }
        return maxPro;
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  