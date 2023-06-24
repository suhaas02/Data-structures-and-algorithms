//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
        int sum = 0;
        int i = 0, j = 0;
        int zero = 0;
        while(j < n)
        {
            // sum += arr[j];
            if(arr[j] == 0)
            {
                zero++;
            }
            while(zero > m)
            {
                if(arr[i] == 0)
                    zero--;
                i++;
            }
            j++;
            sum = max(sum, j - i);
        }
        return sum;
        
    }  
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends