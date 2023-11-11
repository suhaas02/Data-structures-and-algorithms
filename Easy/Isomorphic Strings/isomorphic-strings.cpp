//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s, string t)
    {
        if(s.length() != t.length())
            return false;
        // Your code here
        unordered_map<char,char> t1;
        unordered_map<char,char> t2;
        for(int i = 0; i < s.length(); i++)
        {
            if(t1[s[i]] and t1[s[i]] != t[i])
                return false;
            if(t2[t[i]] and t2[t[i]] != s[i])
                return false;
            t1[s[i]] = t[i];
            t2[t[i]] = s[i];
        }
        return true;
        
    }
};


//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends