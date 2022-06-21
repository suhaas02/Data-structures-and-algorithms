//finding nth node from end of a linked list

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


node *nthNode(node *head, int pos)
{
    node *curr = head;
    //node *temp = head;
    int count = 0 ;
    while (curr -> next != NULL)
    {
        count++;
    }
    if (count < pos)
    {
        cout<<"NULL"<<endl;
    }

    for (int i = 1; i < count - pos + 1; i++)
    {
        curr = curr -> next;
    }
    // for (int i = 0; i < count - pos + 1; i++)
    // {
    //     temp = temp -> next;
    // }
    cout << curr -> data<<endl;
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
    int pos;
    cout<<"Enter the postion of the node from the nth node: "<<endl;
    cin>>pos;
    nthNode(head, pos);
    //rPrint(head);
    return 0;
}