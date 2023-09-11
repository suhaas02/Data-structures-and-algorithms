class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();
        vector<int> vis(n, 0);
        map<int, vector<int>> mp;
        for(int i = 0; i < n; i++)
        {
            if(mp.find(groupSizes[i]) != mp.end()){
                mp[groupSizes[i]].push_back(i);
            }
            else
            {
                mp[groupSizes[i]] = {i};
            }
        }
        
        //here the key and value pairs are being stored correctly
        vector<vector<int>> ans;

        //now i need to break the elements into vectors accordingly to the key 
        for(auto pair : mp)
        {
            int key = pair.first;
            vector<int> val = pair.second;
            if(key == val.size())
            {
                ans.push_back(val);
            }
            else
            {
                vector<int> temp;
                int count = 0;
                for(auto y : val)
                {
                    temp.push_back(y);
                    count++;
                    if(count == key)
                    {
                        ans.push_back(temp);
                        count = 0;
                        temp.clear();
                    }
                }

            }
        }
        return ans;
    }
};