//number is sparse or not 
#include<iostream>
using namespace std;
class Solution
{
    public:
    bool isSparse(int n)
    {
        int count = 0;
        while (n != 0)
        {
            if ((n & 1) == 1)
            {
                count++;
            }
            else
            {
                count = 0;
            }
        }
        if (count >= 2)
        {
            return false;
        }
        else
        {
            return true;
        }
        
        
    }
};
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        Solution ob;
        if(ob.isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    }
    return 0;
}