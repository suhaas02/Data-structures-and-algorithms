//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            //code here.
            vector<int> ans;
            int i = 0;
            while(i<text.size()){
                bool flag = true;
                int k = 0;
                int j = i;
                while(k<pattern.size()){
                    if(pattern[k] != text[j]){
                        flag  = false;
                        break;
                    }
                    j++;
                    k++;
                }
                if(flag){
                    ans.push_back(i+1);
                }
                i++;
            }
            
            return ans;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends