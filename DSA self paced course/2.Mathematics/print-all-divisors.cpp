//printing all divisors of a given number
#include<bits/stdc++.h>
using namespace std;
void printDivisors(int n)
{
    //naive solution
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout<<i<<endl;
        }
        if (i != n/i)
        {
            cout<<n/i<<endl;
        }
        
    }
    
}
int main()
{
    int n;
    cin>>n;
    printDivisors(n);
    return 0;
}