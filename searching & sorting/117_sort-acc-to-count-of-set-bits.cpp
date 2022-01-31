//sort array according to count of set bits 
//problem link: https://practice.geeksforgeeks.org/problems/sort-by-set-bit-count1153/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void sortBySetBitCount(int arr[], int n)
    {
        int binary;
        string s;
        for (int i = 0; i < n; i++)
        {
            stable_sort(arr, arr + n, [](int a, int b) {
                return __builtin_popcount(a) > __builtin_popcount(b);
            });        
        }
        
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  