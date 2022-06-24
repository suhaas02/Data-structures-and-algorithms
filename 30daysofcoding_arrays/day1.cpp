//Day - 1
//To find the maximum and minimum element of
//an arry -----> Approach-1
//Using sorting

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     sort(arr,arr + n);
//     cout<<"The min element in the array is :"<<arr[0]<<endl;
//     cout<<"The max element in the array is :"<<arr[n-1]<<endl;
//     return 0;
// }

//Approach - 2
//using linear search algorithm.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int max = arr[0],min = arr[0];
    for (int j = 0; j < n; j++){
        if (arr[j] > max){
            max = arr[j];
        }
        if (arr[j] < min){
            min = arr[j];
        }
    }
    cout<<max<<" "<<min<<endl;
    return 0;   
}