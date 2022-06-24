//product array puzzle
//problem link: https://practice.geeksforgeeks.org/problems/product-array-puzzle4525/1
// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        
    }
};
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call  
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  