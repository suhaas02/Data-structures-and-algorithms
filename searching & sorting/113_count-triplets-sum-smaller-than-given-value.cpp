//count triplets with sum smaller than x
//problem link: https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// //approach - 1 time complexity: O(N ^ 3)
// class Solution{
// 	public:
// 	long long countTriplets(long long arr[], int n, long long sum)
// 	{
// 	    int count = 0;
//         for (int i = 0; i < n - 2; i++)
//         {
//             for (int j = i + 1; j < n - 1; j++)
//             {
//                 for (int k = j + 1; k < n; k++)
//                 {
//                     if (arr[i] + arr[j] + arr[k] < sum)
//                     {
//                         count++;
//                     }
                    
//                 }
                
//             }
            
//         }
//         return count;
// 	}
// };
class Solution{
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    sort(arr, arr + n);
        int count = 0;
        for (int i = 0; i < n - 2; i++)
        {
            int j = i + 1, k = n - 1;
            while (j < k)
            {
                if (arr[i] + arr[j] + arr[k] >= sum) {
                    k--;
                }
                else{
                    count += (k - j);
                    j++;
                }
                
            }
        }
        return count;
	}
};
int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	    cout << "\n";
    }
    return 0;
}
