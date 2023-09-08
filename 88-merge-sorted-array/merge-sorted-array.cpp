class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int i = 0, j = 0;
        while(i < m and j < n)
        {
            if(nums1[i] < nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i] > nums2[j])
            {
                ans.push_back(nums2[j]);
                j++;
            }
            else if(nums1[i] == nums2[j])
            {
                ans.push_back(nums1[i]);
                ans.push_back(nums2[j]);
                i++;
                j++;
            }
        }
        while(i < m)
        {
            ans.push_back(nums1[i]);
            i++;
        }
        while(j < n)
        {
            ans.push_back(nums2[j]);
            j++;
        }
        for(auto x : ans)
        {
            cout<<x<<" ";
        }
        for(int i = 0; i < ans.size(); i++)
        {
            nums1[i] = ans[i];
        }
    }
};