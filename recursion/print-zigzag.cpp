//print zigzag
#include<bits/stdc++.h>
using namespace std;
void printZigZag(int n)
{
    if (n == 0)
    {
        return;
    }
    cout<<n<<" ";
    printZigZag(n - 1);
    cout<<n<<" ";
    printZigZag(n - 1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    printZigZag(n);
}