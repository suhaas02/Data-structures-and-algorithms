//print the last occurence of a particular element in the array
//problem link: https://www.pepcoding.com/resources/online-java-foundation/recursion-in-arrays/last_index/topic
#include<bits/stdc++.h>
using namespace std;
int lastIndex(int arr[],int i,int x,int size)
{
    if (i == size)
    {
        return -1;
    }
    int lastOcc = lastIndex(arr,i,x,size);
    if (arr[i] == x)
    {
        return i;
    }
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int target;
    cin>>target;
    cout<<lastIndex(a,0,target,n);
    return 0;
    
}