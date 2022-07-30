//finding the ceil on the left side of the array

#include<bits/stdc++.h>
using namespace std;

//naive approach
//tc:O(N ^ 2)
// void ceilLeft(int arr[],int n)
// {
//     cout<<-1<<endl;
//     for (int i = 1; i < n; i++)
//     {
//         int diff = INT_MAX;
//         for (int j = 0; j < i; j++)
//         {
//             if (arr[j] >= arr[i])
//             {
//                 diff = min(diff,arr[j] - arr[i]);
//             }
//             if (diff == INT_MAX)
//             {
//                 cout<<-1<<endl;
//             }
//             else
//             {
//                 cout<<arr[i] + diff<<endl;
//             }
            
//         }
        
//     }
    
// }

//efficient approach
//tc: O(NlogN)
//use self balancing bst
void ceilLeft(int arr[],int n)
{
    cout<<"-1"<<" ";
    set<int> s;
    s.insert(arr[0]);
    for(int i=1;i<n;i++){
        if(s.lower_bound(arr[i])!=s.end())
            cout<<*(s.lower_bound(arr[i]))<<" ";
        else
            cout<<"-1"<<" ";
        s.insert(arr[i]);
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
    ceilLeft(arr,n);
    return 0;
    
}