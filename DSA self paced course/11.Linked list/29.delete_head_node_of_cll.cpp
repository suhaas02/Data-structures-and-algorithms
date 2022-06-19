//delete head of the circukar linked list


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


//naive approach
//tc: o(N);
// node *delHead(node *head)
// {
//     node *curr = head;
//     //node *temp = head;
//     if (head == NULL)
//     {
//         return NULL;
//     }
//     else if (head -> next == head)
//     {
//         delete head;
//         return NULL;
//     }
//     else
//     {
//         while (curr -> next != head)
//         {
//             curr = curr -> next;
//         }
//         curr -> next = head -> next;
//         delete head;
//         return (curr -> next);
        
//     }
    
// }

//efficient approach
//tc: O(N);
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



int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    head -> next = temp1;
    temp1 -> next = temp2;
    temp2 -> next = head;
    // int d;
    // cout<<"Enter data to be added: "<<endl;
    // cin>>d;
    head = delHead(head);
    rPrint(head);
    return 0;
}