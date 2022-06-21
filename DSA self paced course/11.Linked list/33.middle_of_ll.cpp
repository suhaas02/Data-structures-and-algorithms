//finding middle node in a linked list

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

node *middleNode(node *head)
{
    node *curr = head;
    if (head == NULL)
    {
        return NULL;
    }
    if (head -> next == NULL)
    {
        cout<<head->data;
    }
    int count = 0;
    while (curr -> next != NULL)
    {
        count++;
    }
    //cout<<count<<endl;
    int i = 0;
    for (; i < count - 2; i++)
    {
        curr = curr -> next;
    }
    cout<<curr -> data;
    return 0;
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
    // int d;
    // cout<<"Enter data to be added: "<<endl;
    // cin>>d;
    middleNode(head);
    //rPrint(head);
    return 0;
}