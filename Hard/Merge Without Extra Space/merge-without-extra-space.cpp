//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code EndsAverage Time: 20m




class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int l = n - 1;
            int r = 0;
            while(l >= 0 and r < m)
            {
                if(arr1[l] > arr2[r])
                {
                    swap(arr1[l], arr2[r]);
                    l--;
                    r++;
                }
                else
                    break;
            }
            
            sort(arr1, arr1 + n);
            sort(arr2, arr2 + m);
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends