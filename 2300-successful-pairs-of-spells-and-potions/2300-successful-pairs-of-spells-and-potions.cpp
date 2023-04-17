class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& portions, long long success) {
        vector<int> ans;
        sort(portions.begin(),portions.end());
        for(int i = 0; i < spells.size();i++)
        {
            int l = 0,h = portions.size() - 1;
            while(l <= h)
            {
                int mid = l + (h - l) / 2;
                long long temp = (long long int)spells[i] * (long long int)portions[mid];
                if(temp >= success)
                {
                    h = mid - 1;
                }
                else
                    l = mid + 1;
            }
            ans.push_back(portions.size() - l);
            
        }
        return ans;
    }
};