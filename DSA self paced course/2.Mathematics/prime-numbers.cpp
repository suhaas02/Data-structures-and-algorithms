//check for prime numbers
#include<bits/stdc++.h>
using namespace std;
//naive method
bool primeNumbers(int n)
{
    if (n == 1){
        return false;
    }
    for (int i = 2; i < sqrt(n); i++){
        if (n % i == 0)
        {
            return false;
        }
        return true;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<primeNumbers(n);
    return 0;
}