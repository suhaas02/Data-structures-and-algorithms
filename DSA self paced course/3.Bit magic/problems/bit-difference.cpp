// bit difference
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int countBitsFlip(int a, int b){
        int count = 0;
        for (int i = 31; i >= 0 ; i--)
        {
            int x = (a >> i) & 1;
            int y = (b >> i) & 1;
            if (x != y)
            {
                count++;
            }
            
        }
        return count;
    }
};
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  