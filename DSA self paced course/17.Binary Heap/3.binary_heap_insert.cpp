//binary heap insert operation

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

    void insert(int x)
    {
        if(size == capacity)
        {
            return;
        }
        size++;
        arr[size - 1] = x;
        for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i];)
        {
            swap(arr[i],arr[parent(i)]);
            i = parent(i);
        }
        
    }
    
};
// void printArray(int arr[], int n)
//     {
//     for (int i = 0; i < n; ++i)
//         cout << arr[i] << " ";
//     cout << "\n";
//     }

int main()
{
    minHeap h(11);
    h.insert(3); 
    h.insert(2);
    h.insert(15);
    h.insert(20);
    //printArray(arr,4);
    return 0;
}
