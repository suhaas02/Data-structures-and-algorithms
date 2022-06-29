//reversing a queue

#include<bits/stdc++.h>
using namespace std;


//iterative approach
void reverseQueue(queue<int> q)
{
    stack<int> s;
    while (q.empty() == false)
    {
        s.push(q.front());
        q.pop();
    }
    while (s.empty() == false)
    {
        q.push(s.top());
        s.pop();
    }
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
}

//recursive approach



int main() 
{ 
	queue<int> q; 
	q.push(12); 
	q.push(5); 
	q.push(15);
	q.push(20); 

	reverseQueue(q);
    cout<<endl; 
	//Print(q); 
} 
