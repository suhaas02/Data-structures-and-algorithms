//insertion in deque

#include<bits/stdc++.h>
using namespace std;

void insertDq(int arr[],int n)
{
    deque<int> ans;
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        ans.push_back(x);
    }
    for (int j = 0; j < ans.size(); j++)
    {
        cout<<ans[j]<<endl;
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
    insertDq(arr,n);
    return 0;
}