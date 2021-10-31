//Day - 6, Topic: Arrays
//Finding mimimum number of jumps to reach the end of the array.
#include<bits/stdc++.h>
using namespace std;
// Function to return minimum number of jumps to end of array
class Solution{
  public:
    int minJumps(int arr[], int n){
        if(n <= 1){
            return -1;
        }
        if(arr[0] == 0){
            return -1;
        }
        int maxindex = arr[0];
        int step = arr[0];
        int jump = 1;
        int i = 1;
        for(int i = 0; i < n; i++){
            if(i == n - 1){
                return 0;
            }
            maxindex = max(maxindex, i + arr[i]);
            step--;
            if(step == 0){
                jump++;
            }
            if(i >= maxindex){
                return -1;
            }
            step = maxindex - i;
        }
        return -1;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}




// //Day - 6 Topic: Arrays
// //Minimize the height;
// //Problem link: https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,k;
//     cin>>n>>k;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if ((arr[i] - k) <= 0)
//         {
//             arr[i] = arr[i] + k;
//         }
//         else
//         {
//             arr[i]  = arr[i] - k;
//         }
//     }
//     sort(arr, arr + n);
//     int height = arr[n - 1] - arr[0];
//     cout<<height<<endl;
//     return 0;
// }
