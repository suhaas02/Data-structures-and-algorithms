//Day-24 topic: arrays
//problem link: https://www.geeksforgeeks.org/find-subarray-with-given-sum/
//Find subarray with given sum
#include<bits/stdc++.h>
using namespace std;
int findSubarray(int arr[], int n, int sum)
{
    int current_sum = 0, i, j;
    for (int i = 0; i < n; i++){
        current_sum = arr[i];
        for ( j = i + 1; j <= n; j++){
            if (current_sum == sum){
                cout<<"Sum found between indexes "<<i<<" and "<<j - 1<<endl;
                return 1;
            }
            if (current_sum > sum || j == n){
                break;
            }
            current_sum = current_sum + arr[j];
        }
    }
    cout<<"No subrray found"<<endl;
    return 0;
}
int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    findSubarray(arr,n,sum);
}