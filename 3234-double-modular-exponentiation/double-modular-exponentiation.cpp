#include <bits/stdc++.h>
class Solution {
public:
    vector<int> getGoodIndices(vector<vector<int>>& arr, int k) {
        int n = arr.size();
        vector<int> v;
        for(int i = 0 ; i < n ; i++) {
            int a = arr[i][0];
            int b = arr[i][1];
            int c = arr[i][2];
            int d = arr[i][3];
            
            int base = 1;

            for(int j = 0 ; j < b ; j++) {
                base = (base * a) % 10;
            }

            int ans = 1;
            for(int j = 0 ; j < c ; j++) {
                ans = (ans * base) % d;
            }
            if(ans == k) {
                v.push_back(i);
            }
        }
        return v;
    }
};