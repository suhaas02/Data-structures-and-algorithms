//mean and median of array
#include<bits/stdc++.h>
using namespace std;
void meanMedian(int arr[],int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout<<sum/5<<" ";
    sort(arr,arr + n);
    cout<<arr[n/2]<<endl;
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
    meanMedian(arr,n);
    return 0;
}