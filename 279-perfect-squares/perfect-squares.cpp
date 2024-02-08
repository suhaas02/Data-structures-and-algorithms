class Solution {
public:
    int helper(int n,vector<int> &dp){
        if(n<0){
            return INT_MAX;
        }
        if(n==0){
            return 0;
        }
        if(dp[n]!=-1) return dp[n];
        int ans = INT_MAX;
        for(int i=1;i*i<=n;i++){
            int temp = helper((n-(i*i)), dp);
            if(temp!=INT_MAX){
                ans = min(ans,1+ temp);
            }
        }
        return dp[n] = ans;
    }
    int numSquares(int n) {
        vector<int> dp(n+1,-1);
        return helper(n,dp);
    }
};