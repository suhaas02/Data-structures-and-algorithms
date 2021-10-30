// //Day - 5 Topic: Arrays
// //Cyclically rotate the array by one
// //Approach-1 --> Swapping the array elements.
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
//     int i = 0, j = n - 1;
//     while (i != j)
//     {
//         swap(arr[i],arr[j]);
//         i++;
//     }
//     for (int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// } //time complexity: O(n)

// //Approach-2 -> Take a variable x , store the last
// //element in it and shift all the elements one position ahead;
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
//     int x = arr[n - 1];
//     for (int i = n-1; i > 0; i++)
//     {
//         arr[i] = arr[i - 1];
//         arr[0] = x;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"The final output is: "<<arr[i]<<" ";
//     }
//     return 0;
// } //time complexity: O(n)

//Day - 5, Topic: Arrays
//kadanes algorithm
//Finding the contiguous sub-array.
#include<bits/stdc++.h>
using namespace std;   
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max_so_far= 0; 
    int max_ending_here = 0;
    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
        }
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
        }
    }
    cout<<max_so_far;
    return 0;
}
