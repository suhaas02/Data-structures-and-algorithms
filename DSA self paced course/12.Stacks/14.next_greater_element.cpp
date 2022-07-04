//next greater element 

#include<bits/stdc++.h>
#include<vector>
using namespace std;


//naive approach
//tc: 0(N ^ 2);
//space: 0(1)

// void printNext(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int j;
//         for (j = i + 1; j < n; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 cout<<arr[j]<<" ";
//                 break;
//             }
//             // else
//             // {
//             //     cout<<-1<<" ";
//             // }
            
//         }
//         if (j == n)
//         {
//             cout<<-1<<endl;
//         }
        
//     }
    
// }


//efficient approach
//tc: 0(N)
vector printNext(int arr[], int n)
{
    vector <int> v;
    stack <int> s;
    s.push(arr[n - 1]);
    cout<<-1<<endl;
    for (int i = n - 2; i >= 0; i--)
    {
        while (s.empty() == false && s.top() <= arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            v.push_back(-1);
        }
        else
        {
            v.push_back(s.top());
        }
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    for (int k = 0; k < v.size(); k++)
    {
        cout<<v[k]<<" ";
    }
    
}
//prints the output in reverse form



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    printNext(arr, n);
    return 0;
}