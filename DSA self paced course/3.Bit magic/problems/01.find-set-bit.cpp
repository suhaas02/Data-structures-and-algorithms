//find first set bit 
#include<bits/stdc++.h>
using namespace std;
int firstBit(int n)
{
    return log2 (n & -n) + 1;
}
int main()
{
    int n;
    cin>>n;
    cout<<firstBit(n)<<endl;
    return 0;
}