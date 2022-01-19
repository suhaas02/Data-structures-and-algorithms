//first and last occurence of x
//problem link: https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> find(int arr[], int n , int x )
{
    vector <int> v;
    for (int i = 0; i < n; i++){
        if (arr[i] == x){
            v.push_back(i);   
            break;
        }
    }
    for (int j = n - 1; j > 0; j--){
        if (arr[j] == x){
            v.push_back(j);
            break;
        }
    }
    if (v.empty()){
        return {-1, -1};
    }
    else{
        return v;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
