//implementation of queue using stl

#include<bits/stdc++.h>
using namespace std;


// int main()
// {
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     cout<<q.front()<<endl;
//     q.pop();
//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;
//     return 0;
// }


//queue traversal
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.size()<<endl  ;
    while (q.empty() == false)
    {
        cout<<q.front()<<" "<<q.back()<<endl;
        q.pop();
    }
    return 0;

}