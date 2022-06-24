//finding square root using binary search
#include<bits/stdc++.h>
using namespace std;
int sqRoot(int n)
{
    int low = 1, high = n, ans = -1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        int middleSquare = mid * mid;
        if (middleSquare == n)
        {
            return mid;
        }
        else if (middleSquare > n)
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
    cin>>n;
    cout<<sqRoot(n);
    return 0;
}