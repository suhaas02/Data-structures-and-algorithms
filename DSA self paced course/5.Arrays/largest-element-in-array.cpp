//finding the largest element in array
#include<bits/stdc++.h>
using namespace std;
void larElement(int arr[],int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    cout<<max<<endl;
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
    larElement(arr,n);
    return 0;
}