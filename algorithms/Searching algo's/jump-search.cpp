//jump search algorithm
#include<bits/stdc++.h>
using namespace std;
int jumpSearch(int arr[], int x, int n){
    int start = 0, end = sqrt(n);
    while (arr[end] < x && start < n){
        start = end;
        end = end + sqrt(n);
        if (end > n - 1){
            end = n;
        }
        
    }
    for (int i = start; i < end; i++){
        if (arr[i] == x)
        {
            return i;
        }    
    }
    return -1;
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
    int target;
    cin>>target;
    int index = jumpSearch(arr,target,n);
    cout<<"Number "<<target<<" is at index "<<index<<endl;
    return 0;
}