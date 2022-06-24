//delete node at the end of a singly linked list

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

node *delEnd(node *head)
{
    node *curr = head;
    if (head == NULL)
    {
        return NULL;
    }
    else if (head -> next == NULL)
    {
        delete head;
        return NULL;
    }
    while (curr -> next -> next != NULL)
    {
        curr = curr -> next;
    }
    delete(curr -> next);
    curr -> next = NULL;
    return head;
    
}


int main()
{
    node *head = NULL;
    node *temp1 = new node(20);
    head -> next = temp1;
    head = delEnd(head);
    rPrint(head);
    return 0;
}