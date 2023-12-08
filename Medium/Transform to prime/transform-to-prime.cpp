//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    int helper(int n)
    {
        if(n <= 1)
            return 0;
        if(n <= 3)
            return true;
        if(n % 2 == 0 or n % 3 == 0)
            return false;
        for(int i = 5; i * i <= n; i += 6)
        {
            if(n % i == 0 or n % (i + 2) == 0)
                return false;
        }
        return true;
    }
    int minNumber(int arr[],int N)
    {
        int sum = 0;
        for(int i = 0; i < N; i++)
            sum += arr[i];
        int cnt = sum;
        
        if(helper(cnt))
        {
            return 0;
        }
        else
        {
            while(true){
                cnt++;
                if(helper(cnt))
                    return cnt - sum;
            }
        }
        return 0;
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends