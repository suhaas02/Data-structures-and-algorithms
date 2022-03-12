//reverse array in groups
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    void reverseInGroups(vector<long long>& arr, int n, int k){
        for (int i = 0; i < n; i = i + k)
        {
            if (i + k >= n)
            {
                reverse(arr.begin() + i,arr.begin() + n);
            }
            else
            {
                reverse(arr.begin() + i, arr.begin() + i + k);
            }
            
        }
        
    }
};
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 
        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

 