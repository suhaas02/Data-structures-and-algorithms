// //Day - 2 Topic: Arrays
// //Finding kth smallest element in the array
// //given all elements are distinct
// //Approach - 1 ---> Sorting the array
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t; //t testcases
//     cin>>t;
//     while (t--){
//         int n , k; //n = no. of elements in array
//         cin>>n>>k; //k = kth element in that array
//         int arr[n];
//         for (int i = 0; i < n; i++){
//             cin>>arr[i];
//         }
//         sort(arr,arr + n);
//         cout<<"K th smallest element in the arry is :"<<arr[k - 1]<<endl;
//     }
//     return 0;
// } // Time Complexity = O (nlogn)



//Day - 2 Topic: Arrays
//Finding peak element in an array and
//printing the element index as output.
//Approach -- Traversing the whole array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; //Array of n elements
    cin>>n; 
    int arr[n];
    for (int i = 0; i < n; i++){ //taking input of array
        cin>>arr[i];
    }
    if( n == 1)
    cout<<"0"<<endl;
    if(arr[0] >= arr[1])
     cout<<"0";
    if(arr[n - 1] >= arr[n - 2])
    cout<<arr[n-1];
    for (int i = 1; i < n-1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] >= arr[i + 1])
        {
            cout<<i<<endl;
        }
        
    }
    return 0;
}

//Time complexity: O(n)

