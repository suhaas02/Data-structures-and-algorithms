//implementation of queue using linked list

#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    node *next;
    node (int x)
    {
        data = x;
        next = NULL;
    }
};

struct Queue
{
    node *front, *rear;
    int size;
    Queue()
    {
        front = NULL;
        rear = NULL;
        size = 0;
    }
    void enqueue(int x)
    {
        node *temp = new node(x);
        size++;
        if (front == NULL)
        {
            front = rear = temp;
            return;
        }
        rear -> next = temp;
        rear = temp;
        
    }
    void dequeue()
    {
        if (front = NULL)
        {
            
            return;
            size--;
        }
        node *temp = front;
        front = front -> next;
        if (front == NULL)
        {
            rear = NULL;
        }
        delete(temp);
    }
};


int main() 
{ 

	Queue q; 
	q.enqueue(10); 
	q.enqueue(20); 
	q.dequeue(); 
	q.dequeue(); 
	q.enqueue(30); 
	q.enqueue(40); 
	q.enqueue(50); 
	q.dequeue(); 
	cout << "Queue Front : " << (q.front)->data << endl; 
	cout << "Queue Rear : " << (q.rear)->data; 
} 
