//next greater element 
//problem link: https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<int> s;
        stack<int> temp;
        //int n = arr.size();
        s.push(arr[n - 1]);
        temp.push(-1);
        for (int i = n - 2; i >= 0; i--)
        {
            while (!s.empty() && s.top() <= arr[i])
            {
                s.pop(); 
            }
            int nextGre = s.empty() ? (-1) : s.top();
            temp.push(nextGre);
            s.push(arr[i]);
        }
        // while (!temp.empty())
        // {
        //     cout<<temp.top();
        //     temp.pop();
        // }
        //return temp;
        
        
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends