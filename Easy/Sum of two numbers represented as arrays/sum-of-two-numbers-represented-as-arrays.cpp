//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<int> findSum(vector<int> &a, vector<int> &b) {
	    // code here
	    vector<int> ans;
	    reverse(a.begin(), a.end());
	    reverse(b.begin(), b.end());
	    int len = max(a.size(), b.size());
	    int sum = 0;
	    int carry = 0;
	    for(int i = 0; i < len; i++)
	    {
	        sum = 0;
	        if(i < a.size())
	        {
	            sum += a[i];
	        }
	        if(i < b.size())
	            sum += b[i];
	        if(carry == 1)  
	        {
	            sum += carry;
	            carry = 0;
	        }
	        if(sum < 10)
	        {
	            ans.push_back(sum);
	        }
	        else
	        {
	            ans.push_back(sum % 10);
	            carry = sum / 10;
	        }
	    }
	    if(carry == 1)  
	    {
	        ans.push_back(carry);
	        
        }
        reverse(ans.begin(), ans.end());
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        Solution ob;
        auto ans = ob.findSum(a, b);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends