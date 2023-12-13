class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<pair<int,int>> coor;
        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = 0; j < mat[0].size(); j++)
            {
                if(mat[i][j] == 1)
                    coor.push_back({i,j});
            }
        }

        //so now idea is to do row sum and column sum and find that if sum == 1
        int count = 0;
        for(int i = 0; i < coor.size(); i++)
        {
            int x = coor[i].first;
            int y = coor[i].second;

            //for rows
            int sum1 = 0;
            for(int j = 0; j < mat[0].size(); j++)
            {
                sum1 += mat[x][j];
            }

            //for columns
            int sum2 = 0;
            for(int j = 0; j < mat.size(); j++)
            {
                sum2 += mat[j][y];
            }
            if(sum1 == 1 and sum2 == 1)
                count++;
        }
        return count;
    }
};