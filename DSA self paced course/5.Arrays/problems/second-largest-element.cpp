//second largest element in array
// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
   public:
    int print2largest(int arr[], int n)
    {
        int res = -1,largest = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[largest])
            {
                res = largest;
                largest = i;
            }
            else if (arr[i] != arr[largest])
            {
                if (res == -1 || arr[i] >  arr[res])
                {
                    res = i;
                }
                
            }
            
        }
        return res;
    }

};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.print2largest(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}
  // } Driver Code Ends