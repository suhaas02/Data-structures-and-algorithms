//6 basic bitwise operations
#include<bits/stdc++.h>
using namespace std;
int bitwiseOperations(int a,int b)
{
    cout<<"And operation "<<(a & b)<<endl;
    cout<<"or operation "<<(a | b)<<endl;
    cout<<"xor operation "<<(a ^ b)<<endl;
    cout<<"left shift operation "<<(a << b)<<endl;
    cout<<"right shift operation "<<(a >> b)<<endl;
    cout<<"not operation "<<(~a)<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    bitwiseOperations(a,b);
    return 0;
}