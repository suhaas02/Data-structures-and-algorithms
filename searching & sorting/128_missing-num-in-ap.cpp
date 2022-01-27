//missing number in Arthematic prgression
//problem link: https://practice.geeksforgeeks.org/problems/arithmetic-number2815/1
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int inSequence(int A, int B, int C){
       if(C==0) {
           return (A==B);
       }
       if(((B-A)/C)<0) 
       {
           return false;
       }
       if((B-A)%C==0) 
       {
           return true;
       }
       return false;
    } 
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int A, B, C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.inSequence(A, B, C)<<endl;
    }
    return 0;
}  