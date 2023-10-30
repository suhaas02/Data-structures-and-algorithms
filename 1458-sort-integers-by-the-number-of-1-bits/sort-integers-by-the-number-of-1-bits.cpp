class Solution {
public:
    static bool cmp(pair<int,int> &a, pair<int, int> &b)
    {
        if(a.second == b.second)
            return a.first < b.first;
        return a.second < b.second;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> vec;
        vector<int> ans;
        for(int i = 0;i < arr.size(); i++)
        {
            int count = 0;
            int num = arr[i];
            while(num)
            {
                if((num & 1) == 1)
                {
                   count++; 
                }
                num >>= 1;
            }
            vec.push_back({arr[i], count});
        }
        sort(vec.begin(), vec.end(), cmp);
        for(auto x : vec)
        {
            cout<<x.first<<" "<<x.second<<endl;
            ans.push_back(x.first);
        }
        return ans;
    }
};