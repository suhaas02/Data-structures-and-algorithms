//day -20
//problem link: https://www.geeksforgeeks.org/median-of-two-sorted-arrays/
//Finding median of two sorted arrays of same size.
#include<bits/stdc++.h>
using namespace std;
int median(int [], int);
int getmedian(int arr1[],int arr2[],int n)
{
    if (n <= 0){
        return -1;
    }
    if (n == 1) {
        return (arr1[0] + arr2[0])/2;
    }
    if (n == 2){
        return (max(arr1[0], arr2[0]) + min(arr1[1], arr2[1]))/2;
    }
    int m1 = median(arr1, n);
    int m2 = median(arr2, n);
    if (m1 == m2)
        return m1;
    if (m1 < m2){
        if (n % 2 == 0)
            return getmedian(arr1 + n / 2 - 1, arr2, n - n / 2 + 1);
        return getmedian(arr1 + n / 2, arr2, n - n / 2);
    }
    if (n % 2 == 0)
        return getmedian(arr2 + n / 2 - 1, arr1, n - n / 2 + 1);
    return getmedian(arr2 + n / 2, arr1, n - n / 2);
}

int median(int arr[], int n)
{
    if (n % 2 == 0)
        return (arr[n / 2] + arr[n / 2 - 1]) / 2;
    else
        return arr[n / 2];
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1], arr2[n2];
    for (int i = 0; i < n1; i++){
        cin>>arr1[n1];
    }
    for (int j = 0; j < n2; j++){
        cin>>arr2[n2];
    }
    if (n1 == n2){
        cout<<"Median: "<<getmedian(arr1,arr2,n1)<<endl;
    }
}
