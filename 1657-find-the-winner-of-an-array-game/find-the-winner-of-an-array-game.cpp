class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n = arr.size();
        int cnt = 0;
        int maxi = arr[0];
        for(int i = 1; i < n; i++)
        {
            if(arr[i] > maxi)
            {
                maxi = arr[i];
                cnt = 1;
            }
            else
                cnt++;
            if(cnt == k)
                return maxi;
        }
        return maxi;
    }
};