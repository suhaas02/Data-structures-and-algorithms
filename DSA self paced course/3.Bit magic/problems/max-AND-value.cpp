//maximum AND value
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int maxAND (int arr[], int N)
    {
        
    }
};
int main()
{
    int t;
    cin>>t;//testcases
    while(t--)
    {
        int n;
        cin>>n;//input n
        int arr[n+5],i;
        
        //inserting elements
        for(i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        //calling maxAND() function
        cout <<  obj.maxAND(arr,n)<<endl;
    }
    return 0;
}  