class Solution {
public:
    int maxScore(string s) {
        vector<int> preSum;
        int sum = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '1')
                sum += 1;
            preSum.push_back(sum);
        }
        // for(auto x : preSum)
        //     cout << x << endl;
        int maxi = 0;
        int zero = 0;
        int n = preSum.size();
        for(int i = 0; i < s.length() - 1; i++)
        {
            if(s[i] == '0')
                zero++;
            maxi = max(maxi, zero + preSum[n - 1] - preSum[i]);
            cout << zero << " "<<preSum[n - 1] - preSum[i]<<endl;
        }
        return maxi;
    }
};