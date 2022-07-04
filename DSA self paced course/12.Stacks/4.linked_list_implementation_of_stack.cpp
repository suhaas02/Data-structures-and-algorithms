//linked list impelementation if stack in c++

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node (int d)
    {
        data = d;
        next = NULL;
    }
};

struct myStack
{
    node *head;
    int sz;
    myStack()
    {
        head = NULL;
        sz = 0;
    }
    void push(int x)
    {
        node *temp =  new node(x);
        if (head != NULL)
        {
            temp -> next = head;
        }
        head = temp;
        sz ++;
    }
    int pop()
    {
        if (head == NULL)
        {
            return INT_MAX;
        }
        int res = head -> data;
        node *temp = head;
        head = head -> next;
        delete(temp);
        sz--;
        return res;
    }
    int size()
    {
        return sz;
    }
    bool isEmpty()
    {
        return (head == NULL);
    }
    int peek()
    {
        if (head == NULL)
        {
            return INT_MAX;
        }
        return head -> data;
    }
};




int main()
{
    myStack v ;
    v.push(10);
    v.push(20);
    v.push(30);
    cout<<v.pop()<<endl;
    cout<<v.size()<<endl;
    cout<<v.peek()<<endl;
    cout<<v.isEmpty()<<endl;
    return 0;
}



