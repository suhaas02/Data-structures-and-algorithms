//deletion of an element in array
#include<bits/stdc++.h>
using namespace std;
int deleteElement(int arr[],int n,int target)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            break;
        }
        if (i == n)
        {
            return n;
        }
        for (int j = i; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        return (n - 1);
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
    int target;
    cin>>target;
    deleteElement(arr,n,target);
}