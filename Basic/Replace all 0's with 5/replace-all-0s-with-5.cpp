//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int rev(int n)
    {
        int temp = n;
        int reverse = 0;
        while(temp)
        {
            int t = temp % 10;
            if(t == 0)
            {
                reverse = reverse * 10 + 5;
            }
            else
                reverse = reverse * 10 + t;
            temp = temp / 10;
        }
        return reverse;
    }
    int convertFive(int n)
    {
    //Your code here
        int temp = rev(n);
        int ans = rev(temp);
        return ans;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends