class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int fmax = -1;
        int smax = -1;
        for(auto x : nums)
        {
            if(x > fmax)
            {
                smax = fmax;
                fmax = x;
            }
            else if(x > smax)
            {
                smax = x;
            }
        }
        return (fmax - 1) * (smax - 1);
    }
};