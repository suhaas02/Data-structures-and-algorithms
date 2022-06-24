//majority element
#include<bits/stdc++.h>
using namespace std;
// //approach --> using unrodered map
// //time complexity - O(N)
// //space complexity - O(N)
// int majorityElement(int arr[],int n)
// {
//     unordered_map<int,int> freq;
//     for (int i = 0; i < n; i++)
//     {
//         freq[arr[i]]++;
//     }
//     int max_count = 0, res = -1;
//     for(auto it: freq)
//     {
//         if (it.second > n/2)
//         {
//             res = it.first;
//             max_count = it.second;
//         }
        
//     }
//     return res;
// }

//efficient approach
//moores voting algorithm
int majorityElement(int arr[],int n)
{
    int res = 0, count = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            res = i;
            count = 1;
        }
        
    }
    count = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[res] == arr[j])
        {
            count++;
        }
        
    }
    if (count <= n/2)
    {
        res = -1;
    }
    return res;
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
    cout<<majorityElement(arr,n);
    return 0;
}