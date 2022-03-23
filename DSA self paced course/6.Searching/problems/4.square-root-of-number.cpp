// square root of a number
#include <bits/stdc++.h>
using namespace std;
int sqRoot(int n)
{
    int low = 1, high = n, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int midSq = mid * mid;
        if (midSq == n)
        {
            return mid;
        }
        else if (midSq > n)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    cout << sqRoot(n) << endl;
}