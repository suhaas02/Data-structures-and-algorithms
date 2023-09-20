//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        int RightRotate(int n, int d) {
            int keep = (n >> d);
            int lost = (n << (16-d));

            // masks the lower 16 bits to 1 and rest all higher order bits to 0
            return (lost | keep) & 0xFFFF;


        }
        
        int LeftRotate(int n, int d) {
            
            int keep = (n << d);
            int lost = (n >> (16-d));
            // same here
            return (keep | lost) & 0xFFFF;
        }
        
        vector <int> rotate (int n, int d)
        {

            d %= 16;

            int ls = LeftRotate(n, d);
            int rs = RightRotate(n, d);
            
            vector<int> ans{ls, rs};
            return ans;
        }
        
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends