class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        sort(left.begin(), left.end());
        sort(right.begin(), right.end());
        int llen = left.size();
        int rlen = right.size();
        if(llen == 0)
            return n - right[0];
        else if(rlen == 0)
            return left[llen - 1];
        return max(left[llen - 1], n - right[0]);
    }
};