//Day - 5 Topic: Arrays
//Cyclically rotate the array by one
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i = 0, j = n - 1;
    while (i != j)
    {
        swap(arr[i],arr[j]);
        i++;
    }
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} //time complexity: O(n)

