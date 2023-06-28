class Solution {
public:
    void helper(int ind, vector<int> &ds, set<vector<int>> &temp, int n, vector<int> &nums)
    {
        if(ind == n)
        {
            temp.insert(ds);
            return;
        }
        ds.push_back(nums[ind]);
        helper(ind + 1, ds, temp, n, nums);
        ds.pop_back();
        helper(ind + 1, ds, temp, n, nums);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        //approach - 1 // using power set
        // vector<vector<int>> ans;
        // int n = nums.size();
        // for(int i = 0; i < (1 << n);i++)
        // {
        //     vector<int> temp;
        //     for(int j = 0; j < n;j++)
        //     {
        //         if(i & (1 << j))
        //         {
        //             temp.push_back(nums[j]);
        //         }
        //     }
        //     sort(temp.begin(),temp.end());
        //     int flag = 0;
        //     for(int k = 0; k < ans.size();k++)
        //     {
        //         if(temp == ans[k])
        //         {
        //             flag = 1;
        //         }
        //     }
        //     if(flag == 0)
        //             ans.push_back(temp);
        // }
        // return ans;

        //approach - 2 // using recursion
        vector<int> ds;
        set<vector<int>> temp;
        sort(nums.begin(), nums.end());
        helper(0, ds, temp, nums.size(), nums);
        vector<vector<int>> ans(temp.begin(), temp.end());

        return ans;
    }
};