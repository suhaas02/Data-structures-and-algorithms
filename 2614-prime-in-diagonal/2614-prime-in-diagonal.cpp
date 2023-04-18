class Solution {
public:
    bool prime(int number)
    {
        // bool isPrime = true;
        if(number < 2)
            return false;
        for (int i = 2 ; i * i <= number ; i++)
         {
            if (number % i == 0)
            {
              return false;
            }
        
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int max_prime = 0;
        for(int i=0;i<n;i++) {
            if(prime(nums[i][i])) {
                max_prime = max(max_prime, nums[i][i]);
            }
            if(prime(nums[i][n - i - 1])) {
                max_prime = max(max_prime, nums[i][n - i - 1]);
            }
        }
        return max_prime;
    }
};