//day - 26
//problem link: https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1
//Trapping rain water
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long trappingWater(int arr[], int n){
        int max_water = 0;
        for (int i = 1; i < n - 1; i++)
        {
            int left = arr[i];
            for (int j = 0; j < i; j++){
                left = max(left,arr[j]);
            }
            int right = arr[i];
            for (int j = i + 1; j < n; j++){
                right = max(right, arr[j]);
            }
            max_water = max_water + (min(left,right) - arr[i]);
        }
        return max_water;
    }
};
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];       
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        cout << obj.trappingWater(a, n) << endl;
    }
    return 0;
}  
//time complexity: O(n^2);