//check whether kth bit is set or not 
#include <bits/stdc++.h>
using namespace std;

//approach - 2 //right shift
class Solution
{
    public:
    bool checkKthBit(int n, int k)
    {
        // if (((n >> (k - 1)) & 1) == 1)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
        
        //one line logic
        return (n>>k)&1 == 1;
    }
};

// //approach - 1 //left shift 
// class Solution
// {
//     public:
//     bool checkKthBit(int n, int k)
//     {
//         if (n && (1 << (k - 1) != 0))
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
        
//     }
// };
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    int k;
	    cin>>k;
	    Solution obj;
	    if(obj.checkKthBit(n, k))
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}  