//Day - 7, Topic: Arrays
//Finding the duplicate number in an array of n + 1 elements
//Problem link: https://leetcode.com/problems/find-the-duplicate-number/
//Given an array of integers nums containing n + 1 integers where each 
//integer is in the range [1, n] inclusive. There is only 
//one repeated number in nums, return this repeated number.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for (int j = 0; j < n; j++){
        if (arr[j] == arr[j + 1])
            cout<<"The duplicate number is: "<<arr[j]<<endl; 
        else{
            cout<<"-1"<<endl;
        }     
    }
    return 0;
}//time complexity: O(nlogn);