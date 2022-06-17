//insert node at given position

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

void rprint(node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout<<head ->data<<" ";
    rprint(head -> next);
}



node *insertNode(node *head, int pos)
{ 
    node *temp = new node(50);
    node *curr = head;
    if (pos == 1){
        temp -> next = head;
        return temp;
    }
    int i = 1;
    while (i < pos)
    {
        curr = curr -> next;
        i++;
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
    t3 -> next = t4;
    t4 -> next = NULL;
    int pos;
    // cout<<"Enter position of node to be inserted"<<endl;
    head = insertNode(head, 2);
    rprint(head);
}