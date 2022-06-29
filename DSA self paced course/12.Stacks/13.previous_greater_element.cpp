//previous greater element 

#include<bits/stdc++.h>
using namespace std;


//naive approach, tc: O(N ^ 2)
// void printPrev(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int j;
//         for (int j = i - 1; j >= 0; j--)
//         {
//             if (arr[j] > arr[i])
//             {
//                 cout<<arr[j]<<" ";
//                 break;
//             }
            
//         }
//         if (j == -1)
//         {
//             cout<<-1<<endl;
//         }
//     }
// }


void printPrev(int arr[], int n)
{
    stack <int> s;
    s.push(arr[0]);
    cout<<-1<<" ";
    for (int i = 1; i < n; i++)
    {
        while (s.empty() == false && s.top() <= arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            cout<<-1<<" ";
        }
        else
        {
            cout<<s.top()<<" ";
        }
        s.push(arr[i]);
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
    printPrev(arr, n);
    return 0;
}