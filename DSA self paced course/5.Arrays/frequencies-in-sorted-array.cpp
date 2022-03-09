//frequencies of elements in sorted array
#include<bits/stdc++.h>
using namespace std;
void freq(int arr[],int n)
{
    unordered_map<int ,int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] != -1)
        {
            cout<<arr[i]<<" "<<mp[arr[i]]<<endl;
            mp[arr[i]] = -1;
        }
        
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
    freq(arr,n);
    return 0;
}