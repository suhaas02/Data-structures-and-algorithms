//detect loop in a linked list

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    bool visited;
    node (int d)
    {
        data = d;
        next = NULL;
        visited = false;
    }
};

bool detectLoop(node *head)
{
    while (head != NULL)
    {
        if (head -> visited == 1)
        {
            return true;
        }
        head -> visited = 1;
        head = head -> next;
            
    }
    return false;
}



int main()
{
    node *head = new node(10);
    node *t1 = new node(20);
    node *t2 = new node(30);
    node *t3 = new node(40);
    node *t4 = new node(50);
    head -> next = t1;
    t1 -> next = t2;
    t2 -> next = t3;
    t3 ->next = t4;
    t4 -> next = t2;
    if(detectLoop(head))
    {
        cout<<"Loop found"<<endl;
    }
    else
    {
        cout<<"Loop not found"<<endl;
    }
    
    return 0;
}