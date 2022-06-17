// maximum occuring character

// count array method
//  // { Driver Code Starts
//  #include<bits/stdc++.h>
//  using namespace std;

// const int CHAR = 256;
//  // } Driver Code Ends

// class Solution
// {
//     public:
//     //Function to find the maximum occurring character in a string.
//     char getMaxOccuringChar(string str)
//     {
//         // Your code here
//         int count [CHAR] = {0};
//         for (int i = 0; i < str.length(); i++)
//         {
//             count[str[i]]++;
//         }
//         int ans = 0;
//         int max = count[str[0]];
//         for (int j = 0; j < str.length(); j++)
//         {
//             if (max < count[str[j]])
//             {
//                 max = count[str[j]];
//                 ans = str[j];
//             }

//         }
//         return ans;

//     }

// };

// // { Driver Code Starts.

// int main()
// {

//     int t;
//     cin >> t;
//     while(t--)
//     {
//         string str;
//         cin >> str;
//     	Solution obj;
//         cout<< obj.getMaxOccuringChar(str)<<endl;
//     }
// }  // } Driver Code Ends

// using unordered_map
#include <bits/stdc++.h>
using namespace std;
void findFreq(string str)
{
    unordered_map<string, int> umap;
    for (int i = 0; i < str.length(); i++)
    {
        umap[str[i]]++;
    }
    
    
}
int main()
{
    string str;
    cin >> str;
    findFreq(str);
    return 0;
}