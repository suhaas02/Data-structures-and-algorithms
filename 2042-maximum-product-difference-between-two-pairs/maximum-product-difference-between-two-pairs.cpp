class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int a = 0, b = 0, c = INT_MAX, d = INT_MAX, index1 = 0, index2 = 0;
        for(int i=0; i < nums.size(); i++){
            if(a < nums[i]){
                a = nums[i];
                index1 = i;
            }
            if(c > nums[i]){
                c = nums[i];
                index2 = i;
            }
        }
        for(int i=0; i < nums.size(); i++){
            if(i!=index1 and b < nums[i]) b = nums[i];
            if(i!=index2 and d > nums[i]) d = nums[i];
        }

        return (a*b)-(c*d);
    }
};