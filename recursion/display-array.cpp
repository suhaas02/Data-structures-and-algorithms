//display array through recursion.
//problem link: https://nados.io/question/display-array?zen=true
#include<bits/stdc++.h>
using namespace std;
void displayArray(int arr[],int size,int i)
{
    if (i == size)
    {
        return;
    }
    cout<<arr[i]<<endl;
    i++;
    displayArray(arr,size,i);
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
    displayArray(arr,n,0);
    return 0;
}
        