//check if the array is sorted
#include<bits/stdc++.h>
using namespace std;
bool sortedArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
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
    cout<<sortedArray(arr,n)<<endl;
    return 0;
}