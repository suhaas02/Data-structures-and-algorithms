//designing a data structure with min and max operations

#include<bits/stdc++.h>
using namespace std;
struct myDs
{
    deque<int> dq;
    void insertMin(int x)
    {
        dq.push_front(x);
    }
    void insertMax(int x)
    {
        dq.push_back(x);
    }
    int getMin()
    {
        return dq.front();
    }
    int getMax()
    {
        return dq.back();
    }
    int extractMin()
    {
        int x = dq.front();
        
        dq.pop_front();
        
        return x;
    }
    
    int extractMax() 
    {
      int x = dq.back();
        
      dq.pop_back();
        
      return x;
    }
};



int main()
{
	struct myDs ds;
		
	ds.insertMin(10);
	ds.insertMax(15);
	ds.insertMin(5);
	
	int x= ds.extractMin();
	cout << x << endl;
	
	x= ds.extractMax();
	cout << x << endl;
	
	ds.insertMin(8);
    
	return 0;
}