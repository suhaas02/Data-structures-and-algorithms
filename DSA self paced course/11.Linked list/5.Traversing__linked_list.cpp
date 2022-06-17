//traversing a singly linked list
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node (int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(node *head)
{
    while (head != NULL)
    {
        cout<<head->data<<" ";
        head = head -> next;
    }
    
}

int main()
{
    node * head = new node(10);
    node * head = new node(20);
    node * head = new node(30);
    node * head = new node(40);
    printList(head);
    return 0;
}