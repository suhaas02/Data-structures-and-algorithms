//binary search algorithm
//time complexity: O(logN)
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int l, int r, int x)
{
    int mid;
    if (r >= l)
    {
        mid = l + (r - l)/2;
        if (a[mid] == x)
        {
            return mid;
        }
        if (a[mid] > x)
        {
            return binarySearch(a,l,mid - l, x);
        }
        return binarySearch(a,mid + l,r,x);
    }
    return -1;
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
    int result = binarySearch(arr,0,n - 1,target);

}
