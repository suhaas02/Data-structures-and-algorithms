//left rotate an array by d places
#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int n,int d)
{
    reverse(arr,0,d - 1);
    reverse(arr,d,n - 1);
    reverse(arr,0,n - 1);
}
void reverse(int arr[],int low, int high)
    {
        while (low < high)
        {
            int temp = arr[high];
            arr[high] = arr[low];
            arr[low] = temp;
            low++;
            high--;    
        }
        
    }
int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    leftRotate(arr,n,d);
    return 0;
} 