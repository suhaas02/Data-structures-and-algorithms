//Printing the count of subarrays with sum zero
//problem link: https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution{
    public:
    ll findSubarray(vector<ll> arr, int n ) {
        unordered_map<ll,int> mp;
        ll ans = 0;
        ll sum = 0; 
        mp[0]++;
        for(int i=0; i<n; i++){
           sum += arr[i];
           if(mp.find(sum) != mp.end()) 
           ans += mp[sum];
           mp[sum]++;
       }
       return (ans);
    }
};
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; 
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; 
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  