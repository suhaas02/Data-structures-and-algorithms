#include<bits/stdc++.h>
using namespace std;
// //approach - 1 --> left shift
// void kthBit(int n,int k)
// {
//     //left shift
//     if (n & (1 << (k - 1) != 0))
//     {
//         cout<<"Yes"<<endl;
//     }
//     else
//     {
//         cout<<"No"<<endl;
//     }
    
// }

//approach - 2 --> right shift
void kthBit(int n,int k)
{
    if ((n >> (k - 1) & 1) == 1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl; 
    }
    
}
int main()
{
    int n,k;
    cin>>n>>k;
    kthBit(n,k);
    return 0;
}