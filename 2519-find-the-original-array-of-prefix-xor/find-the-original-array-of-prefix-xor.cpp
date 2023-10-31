class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int pre = 0;
        for(int i = 1; i < pref.size(); i++)
        {
            pre ^= pref[i - 1];
            pref[i] = pre ^ pref[i];
        }
        return pref;
    }
};