#include <utility>
class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        unordered_map<string,int> mp;
        mp["0,0"]++;
        for(auto p : path)
        {
            if(p == 'N') 
                y++;
            else if(p == 'S')
                y--;
            else if(p == 'W')
                x--;
            else if(p == 'E')
                x++;
            string t = to_string(x) + ',' + to_string(y);
            if(mp.find(t) != mp.end())
                return true;
            mp[t]++; 
        }
        return false;
    }
};