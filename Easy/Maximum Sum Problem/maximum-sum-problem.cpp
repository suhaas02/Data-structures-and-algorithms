//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int maxSum(int n)
        {
            //code here.
            if(n == 0)
                return 0;
            int sum = 0;
            int two = maxSum(n / 2);
            int three = maxSum(n / 3);
            int four = maxSum(n / 4);
            sum += max(n, two + three + four);
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends