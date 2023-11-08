class Solution {
public:
    // bool helper(int x, int y, int row, int col, int t, int count, int drow[], int dcol[])
    // {
    //     if(x == row and y == col)
    //     {
    //         if(t >= count)
    //             return true;
    //         else
    //             return false;
    //     }
    //     for(int i = 0; i < 8; i++)
    //     {
    //         int r = x + drow[i];
    //         int c = y + dcol[i];
    //         helper(r,c, row, col, t, count, drow, dcol);
    //     }
    // }
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        // int drow[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
        // int dcol[8] = {0, 1, 1, 1, 0, -1, -1, 1}
        // return helper(sx, sy, fx, fy, t, 0, drow, dcol);
        

        //now i understood that, i had tought too much ;(
        if (sx == fx && sy == fy && t == 1)
        return false;

        int maxgap = max(abs(fx-sx), abs(fy-sy));
        return (maxgap > t)? false : true;
        
    }
};