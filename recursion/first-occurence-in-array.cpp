//first occurence in the array
//problem link: https://www.pepcoding.com/resources/online-java-foundation/recursion-in-arrays/first_index_of_occurrence/topic
#include<bits/stdc++.h>
using namespace std;
int firstOcc(int arr[], int i,int x,int size)
{
    if (i == size)
    {
        return -1;
    }
    if (arr[i] == x)
    {
        return i;
    }
    int firstIndex = firstOcc(arr,i + 1,x,size);
    return firstIndex;
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
    cout<<firstOcc(a,0,target,n);
    return 0;
    
}