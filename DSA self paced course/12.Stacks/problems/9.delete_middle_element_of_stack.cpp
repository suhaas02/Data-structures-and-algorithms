//delete middle element of a stack

// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int mid = 0;
        stack <int> temp;
        //int mid = ceil((sizeOfStack + 1) / 2);
        if (sizeOfStack % 2 != 0)
        {
            mid = (sizeOfStack + 1) / 2;
        }
        else
        {
            mid = (sizeOfStack) / 2 + 1;
        }
        int count = 1;
        while (count != mid)
        {
            int ele = s.top();
            s.pop();
            temp.push(ele);
            count++;
        }
        if (count == mid)
        {
            s.pop();
        }
        while (!temp.empty())
        {
            int ele = temp.top();
            temp.pop();
            s.push(ele);
        }
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends