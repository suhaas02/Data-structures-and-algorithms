//implementation of stack using array

// #include<bits/stdc++.h>
// using namespace std;
// struct myStack
// {
//     int *arr;
//     int cap;
//     int top;
//     myStack(int c)
//     {
//         cap = c;
//         arr = new int[cap];
//         top = -1;
//     }
//     void push(int x)
//     {
//         top++;
//         arr[top] = x;
//     }
//     int pop()
//     {
//         int res = arr[top];
//         top--;
//         return res;
//     }
//     int peek()
//     {
//         return arr[top];
//     }
//     int size()
//     {
//         return (top + 1);
//     }
//     bool isEmpty()
//     {
//         return (top == -1);
//     }
// };

// int main()
// {
//     myStack s(5);
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     cout<<s.pop()<<endl;
//     cout<<s.size()<<endl;
//     cout<<s.peek()<<endl;
//     cout<<s.isEmpty()<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
struct myStack
{
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        int res = v.back();
        v.pop_back();
        return res;
    }
    int size()
    {
        return v.size();
    }
    bool isEmpty()
    {
        return v.empty();
    }
    int peek()
    {
        return v.back();
    }
};

 