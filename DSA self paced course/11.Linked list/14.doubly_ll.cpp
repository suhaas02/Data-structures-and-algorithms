//doubly linked list creation
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *prev;
    node *next;
    node (int x)
    {
        data = x;
        prev =  NULL;
        next = NULL;
    }
};



int main()
{
    node *head = new node(10);
    node *t1 = new node(20);
    node *t2 = new node(30);
    head -> next = t1;
    head -> prev = NULL;
    t1 -> next = t2;
    t1 -> prev = head;
    t2 -> prev = t1;
    
}