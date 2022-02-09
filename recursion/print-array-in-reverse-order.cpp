//print the array in reverse order
//problem link: https://www.pepcoding.com/resources/online-java-foundation/recursion-in-arrays/display_array_in_reverse/topic
#include<bits/stdc++.h>
using namespace std;
void printRevArray(int arr[],int size,int n)
{
    if (size == n)
    {
        return;
    }
    printRevArray(arr,size + 1,n);
    cout<<arr[size]<<endl;
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
    printRevArray(arr,0,n);
    return 0;
}