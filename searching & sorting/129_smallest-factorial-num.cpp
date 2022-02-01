//smallest factorial number
//problem link: https://practice.geeksforgeeks.org/problems/smallest-factorial-number5929/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    bool check(int p,int n){
        int temp = p, count = 0, f = 5;
        while (f <= temp)
        {
            count += temp/f;
            f = f*5;
        }
        return (count >= n);
    }
    int findNum(int n)
    {
        if (n == 1){
        return 5;
    }
    int low =0;
    int high = 5 * n;
    while (low < high){
        int mid = (low + high)/2;
        if(check(mid,n))
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }        
    }
        return low;
    }
};
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
} 