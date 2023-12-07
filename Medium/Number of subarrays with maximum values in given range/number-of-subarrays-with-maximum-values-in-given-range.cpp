//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    long countSubarrays(int nums[], int n, int L, int R)
    {
        // Complete the function
        long count = 0;
        long result = 0;
        int left = 0;
        int right = 0;

        while (right < n) {
            if (nums[right] >= L && nums[right] <= R) {
                count = right - left + 1;
                result += count;
            } else if (nums[right] < L) {
                result += count;
            } else {
                left = right + 1;
                count = 0;
            }
            right++;
        }

        return   result;
        
    }
};

//{ Driver Code Starts.
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    }
	return 0;
}

// } Driver Code Ends