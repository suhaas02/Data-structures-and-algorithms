//insert node at the beginning in cirular doubly linked list

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

void rPrint(node *head)
{
    if (head == NULL)
    {
        return;
    }
    node *p = head;
    do
    {
        cout<<p -> data<<" ";
        p = p -> next;
    } while (p != head);
    
}

node *insertBeg(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        temp -> next = temp;
        temp -> prev = temp;
        return temp;
    }
    temp -> prev = head -> prev;
    temp ->next = head;
    head -> prev -> next = head;
    head -> prev = temp;
    return temp;
    
}


node *insertEnd(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        temp -> next = temp;
        temp -> prev = temp;
        return temp;
    }
    temp -> prev = head -> prev;
    temp ->next = head;
    head -> prev -> next = head;
    head -> prev = temp;
    return head;
    
    
}

 