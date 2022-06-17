//insert a node at end of linkedlist

//insert a node at beginning of a linked list
//problem--> only printing the last added node.
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void rPrint(node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout<<head->data<<" ";
    rPrint(head->next);
}

node  *insertEnd(node *temp1)
{
    node *newNode = new node(40);
    temp1 -> next = newNode;
    return newNode;
}



int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    head -> next = temp1;
    head = insertEnd(temp1);
    rPrint(head);
    return 0;
}