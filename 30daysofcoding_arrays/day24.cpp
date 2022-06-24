// //Day-24 topic: arrays
// //problem link: https://www.geeksforgeeks.org/find-subarray-with-given-sum/
// //Find subarray with given sum
// #include<bits/stdc++.h>
// using namespace std;
// int findSubarray(int arr[], int n, int sum)
// {
//     int current_sum = 0, i, j;
//     for (int i = 0; i < n; i++){
//         current_sum = arr[i];
//         for ( j = i + 1; j <= n; j++){
//             if (current_sum == sum){
//                 cout<<"Sum found between indexes "<<i<<" and "<<j - 1<<endl;
//                 return 1;
//             }
//             if (current_sum > sum || j == n){
//                 break;
//             }
//             current_sum = current_sum + arr[j];
//         }
//     }
//     cout<<"No subrray found"<<endl;
//     return 0;
// }
// int main()
// {
//     int n,sum;
//     cin>>n>>sum;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     findSubarray(arr,n,sum);
// }

//Day - 24, topic: arrays
//problem link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//Best time to buy and sell stock
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,profit;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int min = 0;
    int max = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] > max)
        {
            max = j;
        }
        else if(arr[j] < min)
        {
            min = j;
        }
    }
    if (max < min)
    {
        cout<<"Not feasible to buy stocks"<<endl;
    }
    else
    {
        cout<<arr[max] - arr[min]<<endl;
    }
    return 0;
}

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int profit = 0;
        for (int i = prices.size() - 1; i >= 0; i--) {
            if (prices[i] > max) {
                max = prices[i];
            } else {
                profit = std::max(profit, max - prices[i]);
            }
        }
        return profit;
    }
};