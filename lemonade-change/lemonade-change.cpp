class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;
        for(auto x : bills)
        {
            if(x == 5)
                five++;
            else if(x == 10)
            {
                if(five == 0)
                    return false;
                five--;
                ten++;
            }
            else
            {
                if(ten > 0 and five > 0)
                {
                    ten--;
                    five--;
                }
                else if(five >= 3)
                    five -= 3;
                else
                    return false;
            }

        }
        return true;
    }
};