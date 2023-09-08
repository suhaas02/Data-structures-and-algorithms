class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> res;
        if(numRows == 1)
        {
            res = {1};
            ans.push_back(res);
        }
        else if(numRows == 2)
        {
            res = {1};
            ans.push_back(res);
            res = {1, 1};
            ans.push_back(res);
        }
        else
        {
            res = {1};
            ans.push_back(res);
            res = {1, 1};
            ans.push_back(res);
            for(int i = 3; i <= numRows;i++)
            {
                res = {};
                for(int j = 0; j < i;j++)
                {
                    if(j == 0 || j == i - 1)
                        res.push_back(1);
                    else
                    {
                        res.push_back(ans[i - 2][j - 1] + ans[i - 2][j ]);
                    }
                    
                }
                ans.push_back(res);
            }
        }
        return ans;
    }
};