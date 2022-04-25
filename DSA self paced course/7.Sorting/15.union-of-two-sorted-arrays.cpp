// //union of 2 sorted arrays

// //naive approach
// //time complexity: O((m + n) * log(m + n))
// #include<bits/stdc++.h>
// using namespace std;
// int unionArr(int a1[], int a2[], int m, int n)
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
//     sort(c,c + m + n);
//     for (int i = 0; i < m + n; i++)
//     {
//         if (i == 0 || c[i] != c[i - 1])
//         {
//             cout<<c[i]<<endl;
//         }
        
//     }
//     return 0;
// }

// int main()
// {
//     int m,n;
//     cin>>m>>n;
//     int a1[m], a2[n];
//     for (int i = 0; i < m; i++)
//     {
//         cin>>a1[i];
//     }
//     for (int j = 0; j < n; j++)
//     {
//         cin>>a2[j];
//     }
//     unionArr(a1,a2,m,n);
//     return 0;
// }


//efficient solution: O(m + n);
#include<bits/stdc++.h>
using namespace std;
int unionArr(int a1[], int a2[], int m, int n)
{
    int  i = 0,j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && a1[i] == a1[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && a2[j] == a2[j - 1])
        {
            j++;
            continue;
        }  
        if (a1[i] < a2[j])
        {
            cout<<a1[i]<<" ";
            i++;
        }
        else if (a1[i] > a2[j])
        {
            cout<<a2[j]<<" ";
            j++;
        }
        else
        {
            cout<<a1[i]<<" ";
            i++;
            j++;
        }  
    }
    while (i < m)
    {
        if (i > 0 && a1[i] != a1[i - 1])
        {
            cout<<a1[i]<<" ";
            i++;
        }
    }
    while (j < n)
    {
        if (j > 0 && a2[j] != a2[j - 1])
        {
            cout<<a2[j]<<" ";
            j++;
        }
            
    }
    
}

int main()
{
    int m,n;
    cin>>m>>n;
    int a1[m], a2[n];
    for (int i = 0; i < m; i++)
    {
        cin>>a1[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin>>a2[j];
    }
    unionArr(a1,a2,m,n);
    return 0;
}

