//counting number of ones in binary array
#include<bits/stdc++.h>
using namespace std;
int count1(int arr[],int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if (arr[mid] < 1)
        {
            high = mid - 1;
        }
        else
        {
            if (mid == n - 1 || arr[mid + 1] != 1)
            {
                return mid + 1;
            }
            else
            {
               low = mid + 1;
            }
            
        }
        
    }
    return 0;
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
    cout<<count1(arr,n);
    return 0;
}
//but array needes to be sorted.....
//input array is in unsorted form