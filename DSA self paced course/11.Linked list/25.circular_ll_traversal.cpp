//circulat linked list traversal

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

//for loop implenentation
// void rPrint(node *head)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     cout<<head->data<<" ";
//     for(node *p = head -> next; p != head; p = p -> next)
//     {
//         cout<<(p -> data);
//     }
// }

//do while implementation
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




// node *insertBeg(node *head)
// {


// }


int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    head -> next = temp1;
    temp1 -> next = head;
    //head = insertBeg(head);
    rPrint(head);
    return 0;
}