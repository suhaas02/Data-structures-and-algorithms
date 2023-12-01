//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int n = str1.size();
         int m = str2.size();
         string ans = "";
         for(int i=2; i<n; i++){
             ans += str1[i];
        }
        ans += str1[0];
        ans += str1[1];
        
        string res = "";
        res += str1[n-2];
        res += str1[n-1];
        for(int i=0; i<n-2; i++){
            res += str1[i];
        }
        
        if(res == str2 || ans == str2){
            return true;
        }
        return false;
    }

};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends