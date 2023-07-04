// class Solution {
// public:
//     void dfs(int row, int col, int delRow[], int delCol[], vector<vector<int>> &ans, vector<vector<int>> &image, int iniCol, int color, int n, int m)
//     {
//         ans[row][col] = color;
//         for(int i = 0; i < 4; i++)
//         {
//             int nrow = row + delRow[i];
//             int ncol = col + delCol[i];
//             if(nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and ans[nrow][ncol] != color and image[nrow][ncol] == iniCol)
//                 dfs(nrow, ncol, delRow, delCol, ans, image, iniCol, col, n, m);
//         }

//     }
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         int iniCol = image[sr][sc];
//         vector<vector<int>> ans = image;
//         int delRow[] = {-1, 0, +1, 0};
//         int delCol[] = {0, +1, 0, -1};
//         int n = image.size();
//         int m = image[0].size();
//         dfs(sr,sc, delRow, delCol, ans, image, iniCol, color, n, m);
//         return ans;
//     }
// };


//follow the above approach 



class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        // getting the color of the source vertex
        int prevc=image[sr][sc];
        
        // calling dfs
        dfs(image,sr,sc,prevc,newColor);
        
        return image;
        
    }
        
    void dfs(vector<vector<int>>& image, int i, int j,int prevc, int newColor)
    {
        int n=image.size();
        int m=image[0].size();
        
        // Base Cases
        
        if(i<0 || j<0 || i>=n || j>=m)
            return;
        if(image[i][j]!=prevc)
            return;
        if(image[i][j]==newColor)   // think of test case like this [[0,0,0],[0,1,1]] i=1,j=1,newColor=1
            return;
        
        // Assign newColor to the current vertex as we have successfully passed all the bases cases for this vertex
        
        image[i][j]=newColor;
        
        // calling dfs for the 4 valid directions
        
        dfs(image,i+1,j,prevc,newColor); // down
        dfs(image,i-1,j,prevc,newColor); // up
        dfs(image,i,j+1,prevc,newColor); // right
        dfs(image,i,j-1,prevc,newColor); // left
           
    }
};

// Time Complexity: O(m+n)