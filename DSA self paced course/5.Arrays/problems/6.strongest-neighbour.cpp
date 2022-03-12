//strongest neighbour 
//Given an array arr[] of n positive integers. 
//The task is to find the maximum for every adjacent pairs in the array.
#include<bits/stdc++.h>
using namespace std;
void strNeig(int arr[],int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        cout<<max(arr[i], arr[i + 1])<<" ";
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    strNeig(arr,n);
    return 0;
}