//deque deletion

#include<bits/stdc++.h>
using namespace std;

void eraseAt(deque<int> dq,int pos)
{
    dq.erase(pos);
    for (int j = 0; j < dq.size(); j++)
    {
        cout<<dq[j]<<endl;
    }
}

void eraseInRange(deque<int> dq,int pos1,int pos2)
{
    dq.erase(pos1,pos2);
    for (int j = 0; j < dq.size(); j++)
    {
        cout<<dq[j]<<endl;
    }
}

void eraseAll(deque<int> dq)
{
    dq.clear();
    for (int j = 0; j < dq.size(); j++)
    {
        cout<<dq[j]<<endl;
    }
}

int main()
{
    deque<int> dq = {1,2,3,4,5,6};
    int q;
    cin>>q;
    if (q == 1)
    {
        cout<<"Enter the position at which the data needs to be removed"<<endl;
        int pos;
        eraseAt(dq,pos);
    }
    else if (q == 2)
    {
        cout<<"Enter the range of data to be removed"<<endl;
        int pos1,pos2;
        cin>>pos1>>pos2;
        eraseInRange(dq,pos1,pos2);
    }
    else
    {
        eraseAll(dq);
    }
    return 0;
    
}