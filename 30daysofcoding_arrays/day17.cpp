//Day-17, topic: arrays
//problem link: https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1
//Factorial of large numbers
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> factorial(int N){
        vector<int> res;
        res.push_back(1);
        for (int x = 2; x <= N; x++){
            int carry = 0;
            for (int i = 0; i < res.size(); i++){
                int val = res[i]*x + carry;
                res[i] = val%10;
                carry = val/10;
            }
            while (carry != 0){
                res.push_back(carry%10);
                carry = carry/10;
            }
            
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}