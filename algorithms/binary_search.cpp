//binary search 
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int l, int r, int target)
{
    if (r >= l)
    {
        int mid = l + (r - l)/2;

        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] > target)
        {
            return binarySearch(arr,1,mid - 1,target);
        }
        
        return binarySearch(arr,mid + 1,r,target);
    }
    return -1;
}
int main()
{
    int n,target; //size of tha array
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the required element"<<endl;
    cin>>target;
    int result = binarySearch(arr,0,n - 1, target);
    if (result == -1)
    {
        cout<<"Required element is not present in the array"<<endl;
    }
    else
    {
        cout<<"Required element is present in the array at index:"<<result<<endl; 
    }
    return 0;
} //time complexity: 0(logn);