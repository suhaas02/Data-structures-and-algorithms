//dequeue traversal

#include<bits/stdc++.h>
using namespace std;

void traversal(deque<int> x,int n)
{
    // if (!x.empty())
    // {
    //     int ele = x.front();
    //     x.pop_front();
    //     cout<<ele<<endl;
    // }

    for (int i = 0; i < n; i++)
    {
        cout<<x[i]<<endl;
    }
    
    
}



int main()
{
    int n;
    cin>>n;
    deque<int> x = {1,2,3,4,5};
    traversal(x,n);
    return 0;

}