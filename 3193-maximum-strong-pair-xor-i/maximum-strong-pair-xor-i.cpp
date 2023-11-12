class Solution {
public:
    int maximumStrongPairXor(vector<int>& arr) {
        int maxi = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            for(int j = i + 1; j < arr.size(); j++)
            {
                if(abs(arr[i] - arr[j]) <= min(arr[i],arr[j]))
                {
                    maxi = max(maxi, arr[i] ^ arr[j]);
                }
            }
        }
        return maxi;
    }
};