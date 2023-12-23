class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x : nums)
        {
            mp[x]++;
        }
        vector<pair<int,int>> vec;
        for(auto x : mp)
        {
            vec.push_back({x.second, x.first});
        }
        
        sort(vec.begin(), vec.end(), [](pair<int,int> &a, pair<int,int> &b){
            if(a.first == b.first)
                return a.second > b.second;
            return a.first < b.first;
        });
        for(auto x : vec)
            cout << x.first <<" "<<x.second<<endl;
        vector<int> ans;
        for(auto x : vec)
        {
            for(int i = 0; i < x.first; i++)
            {
                ans.push_back(x.second);
            }
        }
        return ans;
    }
};