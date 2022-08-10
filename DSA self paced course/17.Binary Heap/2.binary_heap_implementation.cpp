//binary heap implementation

#include<bits/stdc++.h>
using namespace std;
class minHeap{
    int *arr;
    int size;
    int capacity;
    public:
    
    minHeap(int c){
    size = 0; 
    capacity = c; 
    arr = new int[c];
    }

    int left(int i) { return (2*i + 1); } 
    int right(int i) { return (2*i + 2); } 
    int parent(int i) { return (i-1)/2; } 
};

int main()
{
    minHeap h(11);
    return 0;
}