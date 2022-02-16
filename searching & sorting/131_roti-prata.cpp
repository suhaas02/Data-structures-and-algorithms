//roti prata
//problem link: https://www.spoj.com/problems/PRATA/
#include<bits/stdc++.h>
using namespace std;
int minTime(int arr[],int p,int l)
{
    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int p,l;
        cin>>p;
        cin>>l;
        int arr[l];
        for (int i = 0; i < l; i++)
        {
            cin>>arr[i];
        }
        cout<<minTime(arr,p,l);
    }
    return 0;
}