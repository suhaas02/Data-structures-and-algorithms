class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> temp;
        std::vector<int>::iterator it;
        for(int i = 0;i < nums1.size();i++)
        {
            it = std::find(nums2.begin(),nums2.end(),nums1[i]);
            {
                if(it != nums2.end())
                    temp.insert(nums1[i]);
            }
        }
        vector<int> ans(temp.begin(),temp.end());
        return ans;
        
    }
};