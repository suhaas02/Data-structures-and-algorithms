//designing the stack to find minimum element with O(1) time complexity and O(1) space


#include<bits/stdc++.h>
using namespace std;

struct myStack
{
    stack<int> s;
    
    void push(int x)
    {
        s.push(x);
    }
    int min = s.top();
    int pop()
    {
        s.pop();
    }
    int top()
    {
        return s.top();
    }
    int getMin()
    {
        
    }
};

int main()
{
    myStack s;
    s.push(10);
    s.push(20);
    s.push(4);
    s.push(5);
    s.push(8);
    s.push(1);
    s.pop();
 
    cout<<" Minimum Element from Stack: " <<s.getMin()<<endl;
  
    return 0; 
}