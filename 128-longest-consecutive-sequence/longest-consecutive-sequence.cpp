class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)    
            return 0;
        set<int> st(nums.begin(), nums.end());
        int cnt = 0;
        int maxi = 0;
        vector<int> ans;
        for(auto x : st)
        {
            ans.push_back(x);
        }

        for(int i = 0; i < ans.size() - 1; i++)
        {
            if(ans[i + 1] - ans[i] == 1)
                cnt++;
            else
            {
                maxi = max(cnt, maxi);
                cnt = 0;
            }
        }
        maxi = max(cnt, maxi);
        return maxi + 1;

    }
};