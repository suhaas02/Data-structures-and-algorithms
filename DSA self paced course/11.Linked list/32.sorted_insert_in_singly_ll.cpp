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


node *sortedInsert(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        return temp;
    }
    if (x < head -> data)
    {
        temp -> next = head;
        return temp;
    }
    node *curr = head;
    while (curr -> next != NULL && curr -> next -> data < x)
    {
        curr = curr -> next;
    }
    temp -> next = curr -> next;
    curr -> next = temp;
    return head;
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
    t4 -> next = NULL;
    int d;
    cout<<"Enter data to be added: "<<endl;
    cin>>d;
    node *ans = sortedInsert(head, d);
    rPrint(head);
    return 0;
}