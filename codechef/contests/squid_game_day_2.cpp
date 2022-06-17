//doc link: https://docs.google.com/spreadsheets/d/1fq9tdpcdGRm1inCVP8A8vKF6pH1dU18ZZVuxHNW1HBw/edit#gid=0

//1. second largest

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
        int max = arr[0];
        int secMax = -1;
        for (int i = 1; i < n; i++)
        {
            
        }
        
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends