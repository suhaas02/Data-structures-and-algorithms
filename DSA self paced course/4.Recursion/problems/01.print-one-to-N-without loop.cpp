//print 1 to N without loop
#include<bits/stdc++.h>
using namespace std;
void print1n(int n)
{
    if (n > 0)
    {
        return;
    }
    print1n(n - 1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    print1n(n);
    return 0;
}