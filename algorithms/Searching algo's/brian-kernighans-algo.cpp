//Brain kernighans algorithm 
//article link: https://www.geeksforgeeks.org/count-set-bits-in-an-integer/
//More efficient than the brute force approach
//This algorithm is used to count the number of set bits in a given binary number.
#include<bits/stdc++.h>
using namespace std;
int countSetBits(int n)
{
    unsigned int count = 0;
    while (n){
        n &= (n - 1);
        count++;
    }
    return count;
}
int main()
{
    int i = 9;
    cout<<countSetBits(i)<<endl;
    return 0;
}