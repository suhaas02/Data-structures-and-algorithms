class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int>> q;
        int st_col = image[sr][sc];
        if(st_col == color)
            return image;
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        image[sr][sc] = color;
        q.push({sr, sc});
        int row[] = {-1, 0, +1, 0};
        int col[] = {0, +1, 0, -1};
        while(!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int i = 0; i < 4; i++)
            {
                int r = x + row[i];
                int c = y + col[i];
                if(r >= 0 and r < n and c >= 0 and c < m and st_col == image[r][c] and !vis[r][c])
                {
                    q.push({r,c});
                    image[r][c] = color;
                    vis[r][c] = 1;
                }
            }
        }
        return image;
    }
};