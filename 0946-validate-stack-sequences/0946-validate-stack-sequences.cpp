class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int m = pushed.size();
        int n = popped.size();
        int i = 0,j = 0;
        stack<int> ans;
        while(i < m)
        {
            ans.push(pushed[i]);
            while(!ans.empty() && ans.top() == popped[j] && j < n)
            {
                ans.pop();
                j++;
            }
            i++;
        }
        return j == n;
    }
};