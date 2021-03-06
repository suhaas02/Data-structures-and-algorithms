//stock span problem

#include<bits/stdc++.h>
using namespace std;



//naive approach: --> tc: O(N ^ 2), Space: O(1)
void findSpan(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int span = 1;
        for (int j = i - 1; j >= 0 && arr[j] <= arr[i]; j++)
        {
            span++;
        }
        cout<<span<<" ";
    }
    cout<<endl;
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
    findSpan(arr, n);
    return 0;
}