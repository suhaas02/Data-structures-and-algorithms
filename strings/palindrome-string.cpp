//palindrome string 
//problem link: https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int isPalindrome(string S)
	{
	    int len = S.length();
        int i = 0;
        int j = len - 1;
        if(len == 1)
        {
           return 1;
        }
        while(i <= j)
        {
            if (S[i] == S[j])
            {
                i++;
                j--;
            }
            else
            {
                return 0;
            }
        }
        return 1;
	}
};
int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   	    Solution ob;
   		cout << ob.isPalindrome(s) << "\n";
   	}
    return 0;
} 