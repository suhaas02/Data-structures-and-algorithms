//count digits
// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        if (N / 10 == 0)
        {
            return 1;
        }
        return (1 + evenlyDivides(N / 10));
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends