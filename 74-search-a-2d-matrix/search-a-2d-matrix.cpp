class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int row = 0;
        for(int i = 0; i < n; i++)
        {
            if(matrix[i][0] <= target and matrix[i][m - 1] >= target)
            {
                row = i;
                break;
            }
        }

        int l = 0, h = m - 1;
        while(l <= h)
        {
            int mid = l + (h - l) / 2;
            if(matrix[row][mid] == target)
                return true;
            else if(matrix[row][mid] < target)
                l = mid + 1;
            else
                h = mid - 1;
        }
        return false;
    }
};