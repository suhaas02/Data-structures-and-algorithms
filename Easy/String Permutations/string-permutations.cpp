//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void solve(int i,string& s,string& ds,vector<string>& res){
    if(i == s.length()){
        res.emplace_back(ds);
        return;
    }
    
    for(int j=i;j<s.length();j++){
        ds += s[j];
        
        swap(s[i],s[j]);
        solve(i+1,s,ds,res);
        swap(s[i],s[j]);
        
        ds.pop_back();
    }
}

//Complete this function
vector<string> permutation(string S){
    //Your code here
    string ds;
    vector<string> res;
    
    solve(0,S,ds,res);
    sort(res.begin(),res.end());
    
    return res;
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