// //Day - 16 , Topic: Arrays
// //problem link: https://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/
// //Rearrange array in alternating positive & negative items with O(1) extra space 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
    
// }

//Day - 16 topc:arrays
//problem link: https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
//Subarray with 0 sum
// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool subArrayExists(int arr[], int n)
    {
        unordered_set <int> subarray;
        int sum = 0;
        for (int i = 0; i < n; i++){
            sum += arr[i];
            if (sum == 0 || subarray.find(sum) != subarray.end()){
                return true;
            } 
        }
        return false;
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
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		    cout << "Yes\n";
	    else
		    cout << "No\n";
	}
	return 0;
} 
