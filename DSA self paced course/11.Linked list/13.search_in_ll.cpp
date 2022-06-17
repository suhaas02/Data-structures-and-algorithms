//search in linkedlist 


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

// void rprint(node *head)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     cout<<head->data<<" ";
//     rprint(head -> next);
// }


//iterative approach
// int searchNode(node *head, int x)
// {
//     node *curr = head;
//     int i = 1;
//     while (curr != NULL)
//     {
        
//         if (curr -> data == x)
//         {
//             return i;
//         }
//         else
//         {
//             i++;
//             curr = curr -> next;
            
//         }
        
//     }
//     return -1;
// }

//recrusive approach
int searchNode(node *head, int x)
{
    if (head == NULL)
    {
        return 1;
    }
    else
    {
        int res = searchNode(head -> next, x);
        if (res == -1)
        {
            return -1;
        }
        else
        {
            return (res + 1);
        }
        
    }
    
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
    cout<<"Enter the node to be searched"<<endl;
    int x;
    cin>>x;
    int ans = searchNode(head,x);
    cout<<ans<<endl;

}