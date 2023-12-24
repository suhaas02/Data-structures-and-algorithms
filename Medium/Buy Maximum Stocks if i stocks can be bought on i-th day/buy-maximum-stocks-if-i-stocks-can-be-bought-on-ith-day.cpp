//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here.
        vector<pair<int,int>> vec;
        for(int i = 0; i < n; i++)
        {
            vec.push_back({price[i], i + 1});
        }
        sort(vec.begin(), vec.end());
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(vec[i].first <= k)
            {
                int t = k / vec[i].first;
                int buy = min(vec[i].second, t);
                k -= buy * vec[i].first;
                count += buy;
            }
            else
                break;
        }
        return count;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends