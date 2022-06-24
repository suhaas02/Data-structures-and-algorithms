//insert a node at beginning of a linked list

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

node  *insertStart(node *head)
{
    node *newNode = new node(40);
    newNode -> next = head;
    return newNode;
}



int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    head -> next = temp1;
    head = insertStart(head);
    rPrint(head);
    return 0;
}