//program to check if the string is rotated by 2 places
// { Driver Code Starts
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
        string c;
        int s1 = str1.length();
        int s2 = str2.length();
        if (s1 == s2)
        {
            c = str1.substr(2,s1 - 1) + str1.substr(0,2);
            cout<<c<<endl;
            if (c == str2)
            {
                return true;
            }
            
        }
        return false;
    }

};


// { Driver Code Starts.

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