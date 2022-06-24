//delete first node in singly linked list

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

node  delNode(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        node *temp = head -> next;
        delete head;
        return *temp;
    }
    
}



int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    head -> next = temp1;
    head = delNode(head);
    rPrint(head);
    return 0;
}