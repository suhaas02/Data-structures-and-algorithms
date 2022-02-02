// //selection sort
// //article link: https://www.geeksforgeeks.org/selection-sort/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n - 1; i++){
        int min = arr[i];
        int index = i;
        for (int j = i + 1; j < n; j++){
            if (min > arr[j]){
                min = arr[j];
                index = j;
            } 
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    cout<<"The sorted array is: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int selectionSort(int arr[],int n){
    int min_index,temp;
    for (int i = 0; i < n - 1; i++){
        min_index = i;
        for (int j = i + 1; j < n; j++){
            if (arr[min_index] > arr[j]){
                min_index = j;
            }
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        } 
    }
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
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
    cout<<"The sorted array: "<<selectionSort(arr,n)<<endl;

}