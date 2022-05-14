//searching elements in infinite sized array
#include<bits/stdc++.h>
using namespace std;
int searchIn(int arr[], int n)
{
    if (arr[0] == n)
    {
        return 0;
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
    searchIn(arr,n);
    return 0;
}