//insertion of a node at circular linked list

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

node *insertBeg(node *head, int d)
{
    node *temp = new node(d);
    if (head == NULL)
    {
        temp -> next = temp;
    }
    else
    {
        node *curr = head;
        while (curr -> next != head)
        {
            curr = curr -> next;
        }
        curr -> next = temp;
        temp -> next = head;
    }
    return temp;

}






int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    head -> next = temp1;
    temp1 -> next = head;
    int d;
    cout<<"Enter data to be added: "<<endl;
    cin>>d;
    head = insertBeg(head,d);
    rPrint(head);
    return 0;
}