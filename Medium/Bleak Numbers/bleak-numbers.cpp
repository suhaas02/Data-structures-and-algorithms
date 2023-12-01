//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int countBits(int n)
    {
        int count = 0;
        while(n)
        {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
    int ceilLog(int x)
    {
        int count = 0;
        x--;
        while (x > 0) {
            x = x >> 1;
            count++;
        }
        return count;
    }
	int is_bleak(int n)
	{
	    // Code here.
	    for(int i = n - ceilLog(n); i < n; i++)
	    {
	        if(i + countBits(i) == n)
	            return false;
	    }
	    return true;
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends