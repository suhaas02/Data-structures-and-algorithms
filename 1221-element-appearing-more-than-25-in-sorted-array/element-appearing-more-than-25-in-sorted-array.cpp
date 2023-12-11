class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int flag = arr.size() / 4;
        int count = 1;
        // int ans = 0;
        int prev = arr[0];
        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i] == prev)
            {
                count++;
            }
            else
            {
                count = 1;
                prev = arr[i];
            }
            if(count > flag)
                return prev;
        }
        return prev;
    }
};