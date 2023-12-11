//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        // code here 
        int i = 0, j = 0;
        long long int sum = 0, maxi = 0;
        if(k == n)
        {
            for(j = 0; j < n; j++)
            {
                sum += arr[j];
            }
            return sum;
        }
        else
        {
            for(j = 0; j < k; j++)
            {
                sum += arr[j];
            }
            // cout << sum<<endl;
            maxi = max(sum, maxi);
            while(j < n)
            {
                sum += arr[j];
                sum -= arr[i];
                j++;
                i++;
                maxi = max(sum, maxi);
                // cout << sum<<endl;
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends