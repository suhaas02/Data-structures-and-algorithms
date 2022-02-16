//find two odd occuring numbers in an array
#include<bits/stdc++.h>
using namespace std;
void oddOcc(int arr[],int n)
{
    int XOR = 0,res1 = 0,res2 = 0;
    for (int i = 0; i < n; i++)
    {
        int sn = XOR & ~(XOR - 1);
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] & sn) != 0)
            {
                res1 = res1 ^ arr[i];
            }
            else
            {
                res2 = res2 ^ arr[i];
            }
            
        }
        
    }
    cout<<res1<<res2<<endl;
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
    oddOcc(arr,n);
    return 0;
}