class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& newIn) {
       vector<vector<int>> res;
       int n = in.size(),i = 0;
       while(i < n && in[i][1] < newIn[0])
       {
           res.push_back(in[i]);
           i++;
       }
       while(i < n && newIn[1] >= in[i][0])
       {
           newIn[0] = min(newIn[0],in[i][0]);
           newIn[1] = max(newIn[1],in[i][1]);
           i++;
       }
       res.push_back(newIn);
       while(i < n)
       {
           res.push_back(in[i]);
           i++;
       }
       return res;

    }
};