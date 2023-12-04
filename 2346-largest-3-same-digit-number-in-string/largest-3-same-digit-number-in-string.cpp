class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.length();
        vector<string> ans;
        for(int i = 0; i < n - 2; i++)
        {
            // int count = 0;
            if(num[i] == num[i + 1] and num[i] == num[i + 2])
            {
                string temp = ""; 
                temp += num[i];
                temp += num[i + 1];
                temp += num[i + 2];
                ans.push_back(temp);
            }

        }
        if(ans.size() == 0)
            return "";
        sort(ans.begin(), ans.end());
        return ans[ans.size() - 1];
    }
};