//printing the increasing order of a number using concepta of recursion
#include<bits/stdc++.h>
using namespace std;
void printIncreasing(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        printIncreasing(n - 1);
        cout<<n<<endl;
    }
    
}
int main(){
    int n;
    cin>>n;
    printIncreasing(n);
    return 0;
}