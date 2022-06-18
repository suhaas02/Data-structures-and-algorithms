//insert a node at the end of a double linked list



#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node *prev;
    node (int x)
    {
        data = x;
        next = prev = NULL;
    }
};

node *insertEnd(node *head, int d)
{
    node *temp = new node(d);
    if (head == NULL)
    {
        return temp;
    }
    node *curr = head;
    while (curr -> next != NULL)
    {
        curr = curr -> next;
    }
    curr -> next =  temp;
    temp -> prev = curr;
    return head;
}




int main()
{
    node *head = new node(10);
    node *t1 = new node(20);
    node *t2 = new node(30);
    head -> next = t1;
    t1 -> next = t2;
    t2 -> prev = t1;
    t1 -> prev = head;
    cout<<"Enter the data to be added: "<<endl;
    int d;
    cin>>d;
    cout<<insertEnd(head,d);
    return 0;
}