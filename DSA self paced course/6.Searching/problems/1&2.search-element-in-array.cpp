//search an element in array
#include<bits/stdc++.h>
using namespace std;
int searchEle(int arr[], int n, int x)
{
    int low = 0, high =  n -1;
    int mid;
    while (low <= high)
    {
        mid = (low + high)/2;
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] == x)
        {
            return mid;
        }
        else
        {
            low = mid + 1;         
        }
        
    }
    return mid;
}
int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<searchEle(arr,n,x)<<endl;
    return 0;
}