//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    // bool helper(int n)
    // {
    //     if(n <= 1)
    //         return false;
    //     for(int i = 2; i <= n / 2; i++)
    //     {
    //         if(n % i == 0)
    //             return false;
    //     }
    //     return true;
    // }
    long long int largestPrimeFactor(int N){
        // code here
        // long long ans = 0;
        // for(int i = 1; i <= N / 2; i++)
        // {
        //     bool temp = helper(i);
        //     if(temp and N % i == 0)
        //     {
        //         ans = i;
        //     }
        // }
        // return ans;
        
        long long int ans = 0;
        for(int i = 2; i <= sqrt(N); i++)
        {
            while(N % i == 0)
            {
                N = N / i;
                ans = i;
            }
        }
        if(N != 1)
            ans = N;
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
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends