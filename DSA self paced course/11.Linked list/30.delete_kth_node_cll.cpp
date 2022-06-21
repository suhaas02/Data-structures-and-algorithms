//delete kth node from a circular linked list

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
    node *p = head;
    do
    {
        cout<<p -> data<<" ";
        p = p -> next;
    } while (p != head);
    
}

node *delHead(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head -> next == head)
    {
        delete head;
        return NULL;
    }
    head -> data = head -> next -> data;
    node *temp = head -> next;
    head -> next = head -> next -> next;
    delete temp;
    return head;
}

node *delKth(node *head, int pos)
{
    node *curr = head;
    if (head == NULL)
    {
        return head;
    }
    if (pos == 1)
    {
        return delHead(head);
    }
    for (int i = 0; i < pos - 2; i++)
    {
        curr = curr -> next;
    }
    node *temp = curr -> next;
    curr -> next = curr -> next -> next;
    delete temp;
    return head;
    
    
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
    temp3 -> next = head;
    int d;
    cout<<"Enter position of node to be deleted: "<<endl;
    cin>>d;
    head = delKth(head, d);
    rPrint(head);
    return 0;
}