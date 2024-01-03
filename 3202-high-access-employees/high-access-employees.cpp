class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        unordered_map<string, vector<string>> mp;
        for(int i = 0; i < access_times.size(); i++)
        {
            if(mp.find(access_times[i][0]) != mp.end())
            {
                mp[access_times[i][0]].push_back(access_times[i][1]);
            }
            else
            {
                mp[access_times[i][0]].push_back(access_times[i][1]);
            }
        }
        for(auto x: mp)
        {
            cout << x.first << " ";
            for(auto y : x.second)
            {
                cout << y << " ";
            }
            cout << endl;
        }

        vector<string> ans;
        for(auto entry : mp)
        {
            if(entry.second.size() > 2)
            {
                vector<string> temp = entry.second;
                sort(temp.begin(), temp.end());
                for(int i = 2; i < temp.size(); i++)
                {
                    int x = stoi(temp[i]);
                    int y = stoi(temp[i - 2]);
                    if(x - y < 100)
                    {
                        ans.push_back(entry.first);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};