//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxCoins(int A[], int B[], int T, int N) {
        // code here
        
        priority_queue<pair<int,int>> maxh;
       
       for(int i=0;i<N;i++)
       {
           maxh.push({B[i],A[i]});
       }
       
       int coins=0;
       while(T && maxh.size()>0)
       {
          int Boxes=maxh.top().second;
          int Goldcoins=maxh.top().first;
          
          
          coins+=Goldcoins*min(T,Boxes);
          T-=min(T,Boxes);
          maxh.pop();
       }
       return coins;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int T,N;
        cin>>T>>N;
        
        int A[N], B[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<N; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.maxCoins(A,B,T,N) << endl;
    }
    return 0;
}
// } Driver Code Ends