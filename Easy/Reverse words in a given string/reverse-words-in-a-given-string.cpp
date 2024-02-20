//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        string temp;
        stack<string> st;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != '.')
                temp += s[i];
            else
            {
                st.push(temp);
                temp = "";
            }
        }
        string ans;
        temp += '.';
        while(!st.empty()){
            temp += st.top();
            st.pop();
            temp += '.';
        }
        temp.pop_back();
        return temp;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends