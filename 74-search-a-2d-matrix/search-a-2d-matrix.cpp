class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(); 
        int m = matrix[0].size();
        int x = 0;
        // if(m == 1 and n == 1 and target == matrix[0][0])
        //     return true;
        // else
        //     return false;
        for(int i = 0; i < n; i++)
        {
            if(matrix[i][0] <= target and matrix[i][m - 1] >= target)
            {
                x = i;
                break;
            }
        }
        int l = 0, h = m - 1;
        while(l <= h)
        {
            int mid = l + (h - l) / 2;
            if(matrix[x][mid] == target)
                return true;
            else if(matrix[x][mid] < target)
            {   
                l = mid + 1;
            }
            else
                h = mid - 1;
        }
        return false;
    }
};