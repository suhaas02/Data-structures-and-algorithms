class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        ans.push_back(intervals[0]);
        for(int i = 1; i < n; i++)
        {
            int x = ans.back()[0];
            int y = ans.back()[1];
            if(y >= intervals[i][0])
            {
                ans.back()[0] = min(x, intervals[i][0]);
                ans.back()[1] = max(y, intervals[i][1]);
            }
            else
                ans.push_back(intervals[i]);
        }
        return ans;
    }
};