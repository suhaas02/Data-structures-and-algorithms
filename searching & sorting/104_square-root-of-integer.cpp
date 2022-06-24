//count squares.
//problem link: https://practice.geeksforgeeks.org/problems/count-squares3649/1
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countSquares(int N) {   
        int ans;
        for (int i = 0; i < sqrt(N); i++)
        {
            ans = sqrt(N - 1);
        }
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}  