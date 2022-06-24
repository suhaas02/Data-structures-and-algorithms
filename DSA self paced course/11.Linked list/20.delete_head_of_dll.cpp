//deleting head of a double linked list

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node *prev;
    node (int x)
    {
        data = x;
        next = prev = NULL;
    }
};

node *delHead(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head -> next == NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        node *temp = head;
        head = head -> next;
        head -> prev = NULL;
        delete temp;
        return head;
    }
    
}






int main()
{
    node *head = new node(10);
    node *t1 = new node(20);
    node *t2 = new node(30);
    head -> next = t1;
    t1 -> next = t2;
    t2 -> prev = t1;
    t1 -> prev = head;
    // cout<<"Enter the data to be added: "<<endl;
    // int d;
    // cin>>d;
    cout<<delHead(head)<<endl;
    return 0;
}