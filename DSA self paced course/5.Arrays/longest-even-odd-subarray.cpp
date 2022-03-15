//maximum length even odd subarray
//time complexity: O(N);
#include<bits/stdc++.h>
using namespace std;
int maxEvenOdd(int arr[],int n)
{
    int res = 1;
    int curr = 1;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || 
        (arr[i] % 2 != 0 && arr[i - 1] == 0))
        {
            curr++;
            res = max(res,curr);
        }
        else
        {
            curr = 1;
        }
        
    }
    return res;
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
    cout<<maxEvenOdd(arr,n);
    return 0;
}

//approach - 2...run 2 loops and check if 2 adjacent elements r even and odd.