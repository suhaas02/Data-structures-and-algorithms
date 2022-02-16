//finding if a given number is a power of two
//application of brian kerningam's algorithm
#include<bits/stdc++.h>
using namespace std;
void power(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        count++;
    }
    if (count == 1)
    {
        cout<<"Is a power of 2"<<endl;
    }
    else
    {
        cout<<"Not a power of 2"<<endl;
    }
    
}
int main()
{
    int n;
    cin>>n;
    power(n);
    return 0;
}
//time complexity: O(No. of set bits)