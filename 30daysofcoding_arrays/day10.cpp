// //day-10 topic: Arrays
// //count inversions
// //problem link: https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
// //Approach-1 -->Traverse the whole array using 2 loops and sum the counts for all indexin the array.
#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N){
        int inv = 0;
        for (int i = 0; i < N - 1; i++){
            for (int j = i + 1; j < N; j++){
                if (arr[i] > arr[j]){
                    inv++;
                }  
            }  
        }
        return inv;
    }
};
int main() {
    long long T;
    cin >> T;
    while(T--){
        long long N;
        cin >> N;
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    return 0;
}
//time complexity: O(n^2);

//Day - 10, Topic: Arrays
//Count pairs with given sum;
//problem link: https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
//approach --> brute force approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count = 0;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] + arr[j] == k){
                count++;
            } 
        } 
    }
    cout<<count<<endl;
    return 0;
}

