//Day - 4 Topic: Arrays
//Finding union of 2 arrays and printing the 
//total number of elements in the final array;
//Approach --> Sort both arrays and compare.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,l,count=0;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    for(i=0,j=0;i<n&&j<m;)
    {
        if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
            count++;
        }
        else if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
            count++;
        }
        else
        {
            cout<<b[j]<<" ";
            j++;
            count++;
        }
    }
    while(i < n)
    {
        cout<<a[i]<<" ";
        i++;
        count++;
    }
    while(j < m)
    {
        cout<<b[j]<<" ";
        j++;
        count++;
    }
    cout<<endl;
    cout<<count<<endl;
    return 0;
}//time complexity - O(n+m);
