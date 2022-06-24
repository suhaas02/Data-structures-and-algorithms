// //Day - 7, Topic: Arrays
// //Finding the duplicate number in an array of n + 1 elements
// //Problem link: https://leetcode.com/problems/find-the-duplicate-number/
// //Given an array of integers nums containing n + 1 integers where each 
// //integer is in the range [1, n] inclusive. There is only 
// //one repeated number in nums, return this repeated number.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         cin>>arr[i];
//     sort(arr,arr+n);
//     for (int j = 0; j < n; j++){
//         if (arr[j] == arr[j + 1])
//             cout<<"The duplicate number is: "<<arr[j]<<endl; 
//         else{
//             cout<<"-1"<<endl;
//         }     
//     }
//     return 0;
// }//time complexity: O(nlogn);

//Day - 7, Topic: Arrays.
//Merge 2 sorted arryays without using any extra space.
//Approach: We will traverse the first array and compare it with the first element
//of the second array. If the first element of the second array is smaller than the 
//first array, we will swap and then sort the second array. 
//Question link: https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1
#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int b[],int n,int m)
{
    for (int i = 0; i < n; i++){
        if (a[i] > b[0]){
            int temp = a[i];
            a[i] = b[0];
            b[0] = temp;
            sort(b,b+m);
        }    
    }
    for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    for (int j = 0; j < m; j++){
        cout<<b[j]<<" ";
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int j = 0; j < m; j++){
        cin>>b[j];
    }
    merge(a,b,n,m);
    return 0;
}