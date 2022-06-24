//detect loop in linked list using floyds cycle detection

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node (int d)
    {
        data = d;
        next = NULL;
    }
};

bool loopPre(node *head)
{
    node *slowp = head;
    node *fastp = head;
    while (fastp != NULL && fastp -> next != NULL)
    {
        slowp = slowp -> next;
        fastp = fastp -> next -> next;
        if (slowp == fastp)
        {
            return true;
        }
         
    }
    return false;
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
    t4 -> next = t2;
    if(loopPre(head))
    {
        cout<<"Loop found"<<endl;
    }
    else
    {
        cout<<"Loop not found"<<endl;
    }
    
    return 0;
}