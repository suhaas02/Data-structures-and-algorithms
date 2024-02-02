//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int neg = 1;
        if(s[0] == '-')
            neg = -1;
        int num = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '-' and i == 0)
                continue;
            if(s[i] >= '0' and s[i] <= '9')
            {
                int t = s[i] - '0';
                num = num * 10 + t;
            }
            else
                return -1;
        }
        return neg * num;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends