//find pair given difference
//problem link: https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1
#include<bits/stdc++.h>
using namespace std; 
bool findPair(int arr[], int size, int n);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}
bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    int i=0,j=0;
    while(i<size&&j<size)
    {
        if(arr[j]-arr[i]==n&&i!=j)return 1;
        else if(arr[j]-arr[i]<n)j++;
        else i++;
    }
    return 0;
    
}
// //approach - 1
// bool findPair(int arr[], int size, int n){
//     sort(arr,arr + size);
//     for (int i = 0; i < size/2; i++)
//     {
//         if (abs(arr[i] - arr[size - i - 1]) == n)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// //approach - 2
// bool findPair(int arr[], int size, int n){
//     // sort(arr, arr + n);
//     int i =0, j = 1;
//     while (i < size && j < size)
//     {
//         if (i != j && arr[j] - arr[i] == n || arr[i] - arr[j] == n)
//         {
//             return true;
//         }
//         else if (arr[j] - arr[i] < n)
//         {
//             j++;
//         } 
//         else
//         {
//             i++;
//         }
        
//     }
//     return false;
// }