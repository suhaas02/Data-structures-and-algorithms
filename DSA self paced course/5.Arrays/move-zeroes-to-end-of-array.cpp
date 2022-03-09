//move all the zeroes to the end of the array
//order of the elements in the array must remian same 
#include<bits/stdc++.h>
using namespace std;
void moveZeroes(int arr[],int n)
{
    int count =  0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = arr[i];
            count++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    moveZeroes(arr,n);
    return 0;
}