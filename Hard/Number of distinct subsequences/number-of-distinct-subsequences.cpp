//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
//     void helper(string s, int ind, set<string> &ans, string &temp)
//     {
//         if(ind < 0)
//         {
//             ans.insert(temp);
//             // cout<<temp<<endl;
//             return;
//         }
//         temp += s[ind];
//         helper(s, ind - 1, ans, temp);
//         temp.pop_back();
//         helper(s, ind - 1, ans, temp);
//     }
// 	int distinctSubsequences(string s)
// 	{
// 	    // Your code goes here
// 	    set<string> ans;
// 	    int n = s.length();
// 	    string temp;
	    
// 	    helper(s, n - 1, ans, temp);
// 	    return ans.size();
// 	}
    int distinctSubsequences(string s)
    {
        long long cnt = 1;
        long long mod = 1e9+7;
        
        map<char,long long>m;
        
        for(int i=0;i<s.size();i++){
                int temp = cnt;
                cnt = (cnt*2-m[s[i]]+mod)%mod;
                m[s[i]] = temp;
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends