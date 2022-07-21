//rotate deque by k elements 

#include<bits/stdc++.h>
using namespace std;

void rotateRight(deque<int> d,int k)
{
    for (int i = 0; i < k; i++)
    {
        int back = d.back();
        d.pop_back();
        d.push_front(back);
    }
    for (int j = 0; j < d.size(); j++)
    {
        cout<<d[j]<<endl;
    }
    
    
}

void rotateLeft(deque<int> d,int k)
{
    for (int i = 0; i < k; i++)
    {
        int front = d.front();
        d.pop_front();
        d.push_back(front);
    }
    for (int j = 0; j < d.size(); j++)
    {
        cout<<d[j]<<endl;
    }
    
}




int main()
{
    deque<int> d = {1,2,3,4,5,6};
    int q,k;
    cin>>q>>k;
    if (q == 1)
    {
        rotateRight(d,k);
    }
    else
    {
        rotateLeft(d,k);
    }
    
    
}