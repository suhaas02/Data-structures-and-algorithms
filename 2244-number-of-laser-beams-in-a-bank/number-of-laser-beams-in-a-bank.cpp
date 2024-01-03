class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> lasers;
        for(int i = 0; i < bank.size(); i++)
        {
            int count = 0;
            for(int j = 0; j < bank[i].size(); j++)
            {
                if(bank[i][j] == '1')
                {
                    count++;
                }
            }
            if(count != 0)
                lasers.push_back(count);
        }

        //now counting
        int count = 0;
        for(int i = 1; i < lasers.size(); i++)
        {
            count += lasers[i - 1] * lasers[i];
        }
        return count;
    }
};