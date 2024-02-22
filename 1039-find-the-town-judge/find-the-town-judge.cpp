class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // int n = trust.size();
        vector<pair<int,int>> judge(n + 1);
        for(int i = 0; i < trust.size();i++)
        {
            judge[trust[i][0]].first++;
            judge[trust[i][1]].second++;
        }
        for(int i = 1; i <= n;i++)
        {
            if(judge[i].first == 0 && judge[i].second == n - 1)
                return i;
        }
        return -1;
    }
};