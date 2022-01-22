//merge 2 sorted arrays without extra space
//proble link: https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    vector<int> v;
	    int x=n;
	    for(int i=0; i<n; i++){
	        v.push_back(arr1[i]);
	    }
	    for(int i=0; i<m; i++){
	        v.push_back(arr2[i]);
	    }
	    sort(v.begin(), v.end());
	    for(int j=0; j<n; j++){
	        arr1[j]=v[j];
	    }
	    for(int k=0; k<m; k++){
	        if(x>=n && x<(m+n)){
	            arr2[k]=v[x];
	            x++;
	        }
	    }
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  