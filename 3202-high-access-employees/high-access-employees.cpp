class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        unordered_map<string, vector<int>> mp;
        int n = access_times.size();
        for(int i = 0; i < n; i++)
        {
            mp[access_times[i][0]].push_back(stoi(access_times[i][1]));
        }
        vector<string> ans;
        for(auto x : mp)
        {
            vector<int> temp = x.second;
            sort(temp.begin(), temp.end());
            for(int i = 2; i < temp.size(); i++)
            {
                if(temp[i] - temp[i - 2] < 100)
                {
                    ans.push_back(x.first);
                    break;
                }
            }
        }
        return ans;
    }
};