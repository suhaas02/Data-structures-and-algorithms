//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isStrong(int N) {
        // code here
        int sum = 0;
        int temp = N;
        while(temp)
        {
            int t = temp % 10;
            
            //now calculating the factorial 
            int fac = 1;
            for(int i = 2;i <= t; i++)
            {
                fac *= i;
            }
            // while(t--)
            //     fac *= t;
            sum += fac;
            
            temp = temp / 10;
        }
        if(sum == N)
            return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isStrong(N) << endl;
    }
    return 0;
}
// } Driver Code Ends