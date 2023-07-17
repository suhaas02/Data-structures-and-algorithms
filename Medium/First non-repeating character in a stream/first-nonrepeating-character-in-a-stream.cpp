//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    queue<char> ans;
		    string temp;
		    int charCnt[26] = {0};
		    for(int i = 0; i < A.length();i++)
		    {
		        ans.push(A[i]);
		        charCnt[A[i] - 'a']++;
		        while(!ans.empty())
		        {
		            if(charCnt[ans.front() - 'a'] > 1)
		                ans.pop();
		            else
		            {
		                temp += ans.front();
		                break;
		            }
		        }
		        if(ans.empty())
		            temp += "#";
		    }
		    return temp;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends