//implementation of stack using array


#include<bits/stdc++.h>
using namespace std;



// //simple implementation
// //in this all operations are O(1) except deque function
// struct Queue
// {
//     int size, cap;
//     int *arr;
//     Queue(int c)
//     {
//         cap = c;
//         size = 0;
//         arr = new int[cap];
//     }
//     bool isFull()
//     {
//         return (size == cap);
//     }
//     bool isEmpty()
//     {
//         return (size == 0);
//     }
//     void enque(int x)
//     {
//         if (isFull())
//         {
//             return;
//         }
//         arr[size] = x;
//         size++;
        
//     }
//     void deque()
//     {
//         if (isEmpty())
//         {
//             return;
//         }
//         for (int i = 0; i < size - 1; i++)
//         {
//             arr[i] = arr[i + 1];
//         }
//         size--;
        
        
//     }
//     int getFront()
//     {
//         if (isEmpty())
//         {
//             return -1;
//         }
//         else
//         {
//             return 0;
//         }
        
//     }
//     int getRear()
//     {
//         if (isEmpty())
//         {
//             return -1;
//         }
//         else
//         {
//             return (size -1);
//         }
        
//     }
// };


struct Queue
{
    int size, cap,front;
    int *arr;
    Queue(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    bool isFull()
    {
        return (size == cap);
    }
    bool isEmpty()
    {
        return (size == 0);
    }
    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return front;
        }
        
    }
    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return (front + size - 1) % cap;
        }
        
    }
    void enque(int x)
    {
        if (isFull())
        {
            return;
        }
        int rear = getRear();
        rear = (rear + 1) % cap;
        arr[rear] = x;
        size++;
    }
    void deque()
    {
        if (isEmpty())
        {
            return;
        }
        front = (front + 1) % cap;
        size--;
    }
};






int main()
{
    int cap;
    cin>>cap;
    Queue q(cap);
    cout<<q.isFull();
}