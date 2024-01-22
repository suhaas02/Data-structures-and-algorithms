class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> table(nums.size() + 1);

        for (int num: nums)
        {
            table[num] += 1;
        }

        int missing = 0;
        int repeating = 0;

        for (int i = 1; i < table.size(); ++i)
        {
            if (table[i] == 0)
            {
                missing = i;
            }
            else if (table[i] == 2)
            {
                repeating = i;
            }

            if (missing && repeating)
            {
                break;
            }
        }

        return {repeating, missing};
    }
};