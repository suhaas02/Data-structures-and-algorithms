class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        //approach - 1 didnt work
        // vector<int> ans;
        // if(k == 0)
        //     return nums;
        // else if(k > nums.size())
        //     return {-1};
        // int preSum = 0;
        // int i = 0;
        // while(i < nums.size())
        // {
        //     if(i - k < 0 || i + k > nums.size())
        //         ans.push_back(-1);
        //     else if(i - k > 0 && i + k < nums.size())
        //     {
        //         int tmp = 0;
        //         for(int j = i - k; j <= i + k; j--)
        //         {
        //             tmp += nums[j];
        //         }
        //         ans.push_back(tmp / (2 * i + 1));
        //     }

        // }
        // return ans;

        //approach - 2 // using prefix sum;
        int n = nums.size();
        int winSize = 2 * k + 1;
        vector<int> ans(n, -1);
        if(n < winSize)
            return ans;
        vector<long long> prefixSum(n + 1);
        prefixSum[0] = nums[0];
        for(int i = 0; i < n; i++)
        {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }
        for(auto x : prefixSum)
            cout<<x<<" ";
        for(int i = k; i + k < n; i++)
        {
            ans[i] = (prefixSum[i + k + 1] - prefixSum[i - k]) / winSize;
        }
        return ans;
    }
};