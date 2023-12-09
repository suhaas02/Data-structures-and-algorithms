//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int smithNum(int n) {
        // code here
        vector<int> primes;
        int num = n;
        
        // finding prime no. for the given no.
        for(int i=2; i<n; i++) {
            while(num%i == 0) {
                primes.push_back(i);
                num /= i;
            }
        }
        
        // sum of the digits 
        num = 0;
        while(n) {
            int d = n%10;
            num += d;
            n /= 10;
        }
        
        // calculating sum, of the prime factors
        int sum = 0;
        for(int i=0; i<primes.size(); i++) {
            while(primes[i]) {
                int digit = primes[i]%10;
                sum += digit;
                primes[i] /= 10;
            }
        }
        
        return num == sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends