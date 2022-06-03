// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

const int CHAR = 256;
 // } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       int count[CHAR] = {0};
       for (int i = 0; i < S.length(); i++)
       {
           count[S[i]]++;
       }
       for (int j = 0; j < S.length(); j++)
       {
           if (count[S[j]] == 1)
           {
               return j;
           }
           
       }
       return -1;
       
    }

};

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}
  // } Driver Code Ends