//inserrt a node at beginning of the linked list

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

node *insertBeg(node *head, int d)
{
    node *temp = new node(d);
    temp -> next = head;
    if (head != NULL)
    {
        head -> prev = temp;
    }
    return temp; 
    
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
    cout<<insertBeg(head,d) -> data;
    return 0;
}