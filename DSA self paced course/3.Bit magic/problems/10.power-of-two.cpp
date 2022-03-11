//power of 2
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isPowerofTwo(long long n){
        int count = 0;
        while (n > 0)
        {
            n = (n & (n - 1));
            count++;
        }
        if (count == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;
        Solution ob;
         if(ob.isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}
  