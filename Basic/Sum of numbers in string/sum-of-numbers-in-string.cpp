//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
        string num;
        int sum = 0;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] >= '0' and str[i] <= '9')
            {
                num += str[i];
            }
            else
            {
                int temp = 0;
                for(int j = 0; j < num.size(); j++)
                {
                    int t = num[j] - '0';
                    temp = temp * 10 + t;
                }
                sum += temp;
                num.clear();
            }
        }
        if(num.size() != 0)
        {
            int temp = 0;
            for(int j = 0; j < num.size(); j++)
            {
                int t = num[j] - '0';
                temp = temp * 10 + t;
            }
            sum += temp;
            num.clear();
        }
        return sum;
    	
    	// Your code here
    	
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends