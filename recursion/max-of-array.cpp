//maximum of an array
//problem link: https://www.pepcoding.com/resources/online-java-foundation/recursion-in-arrays/max_of_an_array/topic
#include<bits/stdc++.h>
using namespace std;
int maxElement(int arr[],int i,int size)
{
    if (i >= size)
    {
        return;
    }
    
    int misa = maxElement(arr,i + 1,size);
    if (arr[i] > misa)
    {
        return arr[i];
    }
    return misa;
    
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
    cout<<maxElement(arr,0,n);
    return 0;
}