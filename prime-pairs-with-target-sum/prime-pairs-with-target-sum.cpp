class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> ans;
        vector<bool> isPrime(n + 1, true);

        isPrime[0] = isPrime[1] = false;

        for (int p = 2; p * p <= n; p++) {
            if (isPrime[p]) {
                for (int i = p * p; i <= n; i += p) {
                    if (i <= n)
                        isPrime[i] = false;
                }
            }
        }

        vector<int> primes;
        for (int p = 2; p <= n; p++) {
            if (isPrime[p])
                primes.push_back(p);
        }

        int l = 0, r = primes.size() - 1;
        while (l <= r) {
            if (primes[l] + primes[r] == n) {
                ans.push_back({primes[l], primes[r]});
                l++;
                r--;
            } else if (primes[l] + primes[r] < n) {
                l++;
            } else {
                r--;
            }
        }
        return ans;
    }
};