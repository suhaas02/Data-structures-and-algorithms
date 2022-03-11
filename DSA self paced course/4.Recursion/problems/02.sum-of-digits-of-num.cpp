//sum of digits of a number
// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int sumOfDigits(int N){
        if (N == 0)
        {
            return 0;
        }
        return (N % 10) + sumOfDigits(N / 10);

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
        cout << ob.sumOfDigits(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends