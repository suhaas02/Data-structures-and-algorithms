class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows == 1)
            return {{1}};
        ans.push_back({1});
        if(numRows == 2)
            return {{1},{1,1}};
        ans.push_back({1, 1});
        vector<int> temp;
        for(int i = 3; i <= numRows; i++)
        {
            temp = {};
            for(int j = 0; j < i; j++)
            {
                if(j == 0 or j == i - 1)
                    temp.push_back(1);
                else
                {
                    temp.push_back(ans[i - 2][j - 1] + ans[i - 2][j]);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};