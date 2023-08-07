//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void helper(string s, vector<string> &ans, string out, vector<int> &vis)
    {
        if(out.length() == s.length())
        {
            ans.push_back(out);
            return;
        }
        
        for(int i = 0; i < s.length(); i++)
        {
            if(vis[i] == 0)
            {
                vis[i] = 1;
                out = out + s[i];
                helper(s, ans, out, vis);
                out.pop_back();
                vis[i] = 0;
            }
            // out.pop_back();
            // helper()
        }
    }
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string> ans;
        vector<int> vis(S.length(), 0);
        string out;
        helper(S, ans, out, vis);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends