//number of steps to reduce a number to zero;
//problem link: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/submissions/
#include<bits/stdc++.h>
using namespace std;
int numberOfSteps(int num) {
    if(num <= 0) 
        return 0;  
    if(num % 2 == 0)
    {
        return (1 + numberOfSteps(num / 2));
    }
    else
    {
        return (1 + numberOfSteps(num - 1));
    }
}
int main()
{
    int num;
    cin>>num;
    cout<<numberOfSteps(num)<<endl;
    return 0;
}