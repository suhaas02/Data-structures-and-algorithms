//print increasing and decreasing order implementing the concepts of recursion
#include<bits/stdc++.h>
using namespace std;
void printIncDec(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout<<n<<endl;
        printIncDec(n - 1);
        cout<<n<<endl;
    }
    
}
int main()
{
    int n;
    cin>>n;
    printIncDec(n);
    return 0;
}