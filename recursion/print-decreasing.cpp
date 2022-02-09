//printing the decreasing order of an array using recursion
#include<bits/stdc++.h>
using namespace std;
void printDecreasing(int n)
{
    if (n == 0){
        return;
    }
    else{
        cout<<n<<endl;
        printDecreasing(n - 1);
    }
}
int main(){
    int n;
    cin>>n;
    printDecreasing(n);
    return 0;
}