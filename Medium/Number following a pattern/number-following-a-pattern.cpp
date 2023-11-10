//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        stack<int> st;
        int num=1;
        string ans;
        
        for(int i=0;i<S.length();i++)
        {
            st.push(num++);
            if(S[i]=='I')
            {
                while(!st.empty())
                {
                    ans+= to_string(st.top());
                    st.pop();
                }
            }
        }
        
        st.push(num++);
        
        while(!st.empty())
        {
            ans+=to_string(st.top());
            st.pop();
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends