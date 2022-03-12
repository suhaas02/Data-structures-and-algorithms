//minimum adjacent array
//Given an array Arr of n integers arranged in a circular fashion. 
//Your task is to find the minimum absolute difference between adjacent elements.
#include<bits/stdc++.h>
using namespace std;
void minAdj(int arr[],int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = abs(arr[i] - arr[i + 1]);
    }
    arr[n - 1] = arr[n - 1] - arr[0];
    int min = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < arr[min])
        {
            min = j;
        }
        
    }
    cout<<arr[min]<<endl;
    
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