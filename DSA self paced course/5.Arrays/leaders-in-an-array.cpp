//leaders in an array
#include<bits/stdc++.h>
using namespace std;
void leader(int arr[],int n)
{
    int curr = arr[n - 1];
    cout<<curr<<" ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (curr < arr[i])
        {
            curr = arr[i];
        }
        cout<<curr<<" ";
    }
    
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
    leader(arr,n);
    return 0;
}
//time complexity: O(N);