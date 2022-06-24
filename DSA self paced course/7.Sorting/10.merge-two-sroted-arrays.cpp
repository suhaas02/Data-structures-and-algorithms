// //merge 2 sorted arrays
// //naive approach
// #include<bits/stdc++.h>
// using namespace std;
// int mergeSort(int a1[],int a2[],int m,int n)
// {
//     int c[m + n];
//     for (int i = 0; i < m; i++)
//     {
//         c[i] = a1[i];
//     }
//     for (int j = 0; j < n; j++)
//     {
//         c[m + j] = a2[j];
//     }
//     sort(c, c + m + n);
//     for (int i = 0; i < m + n; i++)
//     {
//         cout<<c[i]<<endl;
//     }
//     return 0;
// }
// int main()
// {
//     int n,m;
//     cin>>m>>n;
//     int a1[m],a2[n];
//     for (int i = 0; i < m; i++)
//     {
//         cin>>a1[i];
//     }
//     for (int j = 0; j < n; j++)
//     {
//         cin>>a2[j];
//     }
//     mergeSort(a1,a2,m,n);
//     return 0;
// }

//efficient approach
#include<bits/stdc++.h>
using namespace std;
int mergeSort(int a1[],int a2[],int m,int n)
{
    int i = 0,j = 0;
    while (i < m && j < n)
    {
        if (a1[i] <= a2[j])
        {
            cout<<a1[i]<<" ";
            i++;
        }
        else
        {
            cout<<a2[j]<<" ";
            j++;
        }
            
    }
    while (i < m)
    {
        cout<<a1[i]<<" ";
        i++;
    }
    while (j < n)
    {
        cout<<a2[j]<<" ";
        j++;
    }
    
}
int main()
{
    int n,m;
    cin>>m>>n;
    int a1[m],a2[n];
    for (int i = 0; i < m; i++)
    {
        cin>>a1[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin>>a2[j];
    }
    mergeSort(a1,a2,m,n);
    return 0;
}