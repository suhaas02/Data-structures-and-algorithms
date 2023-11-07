class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<int> time;
        // vector<pair<int,int>> vec;
        for(int i = 0; i < dist.size(); i++)
        {
            int t = ceil((float)dist[i] / speed[i]);
            time.push_back(t);
        }
        sort(time.begin(), time.end());
        int cnt = 1;
        int time_passed = 1;
        for(auto x : time)
            cout<<x<<" ";
        for(int i = 1;i < time.size(); i++)
        {
            if(time[i] - time_passed <= 0)
                return cnt;
            else
            {
                cnt++;
                time_passed++;
            }
        }
        return cnt;
    }
};