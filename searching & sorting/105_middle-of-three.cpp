//middle of three
//problem link: https://practice.geeksforgeeks.org/problems/middle-of-three2926/1
#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int middle(int A, int B, int C){
       int arr[3];
       arr[0] = A;
       arr[1] = B;
       arr[2] = C;
       sort(arr,arr + 3);
       return arr[1];   
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
} 