//maximum consecutive ones in a binary array
#include<bits/stdc++.h>
using namespace std;
int maxOnes(int arr[],int n)
{
    int res = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            curr = 0;
        }
        else
        {
            curr++;
            res = max(res, curr);
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
    maxOnes(arr,n);
    return 0;
}