//Day -8, Topic: Arrays
//Merge intervals
//Question link: https://leetcode.com/problems/merge-intervals/
//Given an array of intervals where intervals[i] = [starti, endi], 
//merge all overlapping intervals, and return an array of the 
//non-overlapping intervals that cover all the intervals in the input.

//pseudo code
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> minterval;
    if (intervals.size() == 0)
    {
        return minterval;
    }
    sort(intervals.begin(),intervals.end());
    vector<int> tempInterval = intervals[0];
    for (auto it : intervals)
    {
        if (it[0] <= tempInterval[1])
        {
            tempInterval[1] = max(it[1], tempInterval[1]);

        }
        else
        {
            minterval.push_back(tempInterval);
            tempInterval = it;
        }
        
    }
    minterval.push_back(tempInterval);
    return minterval;  
    }
};