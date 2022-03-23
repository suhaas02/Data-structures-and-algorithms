//search in infinite array
//unbounded binary search
#include<bits/stdc++.h>
using namespace std;
int searchInfinite(int arr[], int n)
{
    if (arr[0] == n)
    {
        return 0;
    }
    int i = 1;
    while (arr[i] < n)
    {
        i = i * 2;
    }
    if (arr[i] == n)
    {
        return i;
    }
    return binary_search(i/2 + 1,i - 1, n);
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
    searchInfinite(arr,n);
    return 0;
}