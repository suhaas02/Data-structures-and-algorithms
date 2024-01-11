class Solution {
public:
    // static bool cmp(pair<int,int> &a, pair<int,int> &b)
    // {
    //     return a.first > b.first;
    // }
    string frequencySort(string s) {
        // unordered_map<int,int> mp;
        // for(auto x : s)
        //     mp[x]++;
        // string ans;
        // vector<pair<int,int>> vec;
        // for(auto x : mp)
        // {
        //     vec.push_back({x.second, x.first});
        // }
        // sort(vec.begin(), vec.end(), cmp);
        // for(auto x : vec)
        // {
        //     while(x.first--)
        //         ans += x.second;
        // }
        // return ans;

        //approach - 2
        //using priority queue
        unordered_map<char,int> mp;
        for(auto x : s)
            mp[x]++;
        priority_queue<pair<int,char>> pq;
        for(auto x : mp)
        {
            pq.push({x.second, x.first});
        }
        string ans;
        while(!pq.empty())
        {
            auto it = pq.top();
            for(int i = 0; i < it.first; i++)
            {
                ans += it.second;
            }
            pq.pop();
        }
        return ans;
    }
};