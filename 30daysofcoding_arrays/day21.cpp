//Day - 21, topic: arrays
//problem link: https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1
//Triplet sum in array
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X){
        sort(A,A+n);
        bool ans  = 0;
        for (int i = 0; i < n; i++){
            int start = i + 1;
            int end = n - 1;
            while (start < end){
                if (A[i] + A[start] + A[end] == X){
                    ans = 1;
                    break;
                }
                else if (A[i] + A[start] + A[end] < X){
                    start++;
                }
                else{
                    end--;
                } 
            }
            if(ans==1) 
            break;
        }
        return ans;
    }
};

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
