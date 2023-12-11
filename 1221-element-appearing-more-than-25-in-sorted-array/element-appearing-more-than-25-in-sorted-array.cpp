class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int> mp;
        int flag = arr.size() / 4;
        for(auto x : arr)
            mp[x]++;
        for(auto x : mp)
        {
            if(x.second > flag)
                return x.first;
        }
        return 0;
    }
};