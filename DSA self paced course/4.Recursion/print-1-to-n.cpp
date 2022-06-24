//printing numbers from 1 to N using recurison
#include<bits/stdc++.h>
using namespace std;
void print1(int n)
{
    if (n == 0)
    {
        return;
    }
    print1(n - 1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    print1(n);
    return 0;
}