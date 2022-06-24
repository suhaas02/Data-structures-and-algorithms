//detect and remove loop in a linked list

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node (int x)
    {
        data = x;
        next = NULL;
    }
};

void detectRemoveLoop(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
        if (slow == fast)
        {
            break;
        }
        
    }
    if (slow != fast)
    {
        return;
    }
    slow = head;
    while (slow -> next != fast -> next)
    {
        /* code */
        slow = slow -> next;
        fast = fast -> next;
    }
    fast -> next = NULL;
}




int main()
{

}