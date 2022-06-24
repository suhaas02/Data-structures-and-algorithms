//insertion sort
//article link: https://www.geeksforgeeks.org/insertion-sort/
#include<bits/stdc++.h>
using namespace std;
int insertionSort(int arr[], int n){
    int i,j,key;
    for (int i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for (int k = 0; k < n; k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    return 0;
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
    cout<<insertionSort(arr,n);
    return 0;
}
//time complexity: O(N ^ 2)
//space complexity: O(1)