//traversing a linkedlist recursively

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

int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    node *temp3 = new node(40);
    head -> next = temp1;
    temp1 -> next = temp2;
    temp2 -> next = temp3;
    rPrint(head);
    return 0;
}