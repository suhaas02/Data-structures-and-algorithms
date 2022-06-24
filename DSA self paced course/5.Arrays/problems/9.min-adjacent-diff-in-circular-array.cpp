//minimum adjacent difference in circular array
#include<bits/stdc++.h>
using namespace std;
void minAdj(int arr[],int n)
{
    int diff = 0;
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = abs(arr[i] - arr[i + 1]);
    }
    arr[n] = abs(arr[n] - arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
    minAdj(arr,n);
    return 0;
}