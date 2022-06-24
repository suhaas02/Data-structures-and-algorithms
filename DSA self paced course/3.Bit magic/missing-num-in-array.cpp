//find the mising number in array
#include<bits/stdc++.h>
using namespace std;
void missingNum(int a[],int n)
{
    int res1 = 0,res2 = 0;
    for (int i = 1; i <= n + 1; i++)
    {
        res1 = res1 ^ i;
    }
    for (int i = 0; i < n; i++)
    {
        res2 = res2 ^ a[i];
    }
    int res = res1 ^ res2;
    cout<<res<<endl;
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
    missingNum(arr,n);
    return 0;
}