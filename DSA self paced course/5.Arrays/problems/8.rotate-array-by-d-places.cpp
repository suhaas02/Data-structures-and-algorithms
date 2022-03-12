//rotate array by d places
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void rotateArr(int arr[], int d, int n){
        
        // //approach - 1 --> time complexity: O(N ^ 2);
        // while (d--)
        // {
        //     int temp = arr[0];
        //     for (int i = 1; i < n; i++)
        //     {
        //         arr[i - 1] = arr[i];
        //     }
        //     arr[n - 1] = temp;
        // }
        reverse(arr,0,d - 1);
        reverse(arr,d,n - 1);
        reverse(arr,0,n - 1);

    }
    void reverse(int arr[],int low, int high)
    {
        while (low < high)
        {
            int temp = arr[high];
            arr[high] = arr[low];
            arr[low] = temp;
            low++;
            high--;    
        }
        
    }
};
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, d;
	    cin >> n >> d;
	    int arr[n];
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    ob.rotateArr(arr, d,n);
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  