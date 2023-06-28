class Solution {
public:

    void search(vector<int>& num, int next, vector<int>& pSol, int target, vector<vector<int> >& result)
    {
        if(target == 0)
        {
            result.push_back(pSol);
            return;
        }
        
        if(next == num.size() || target - num[next] < 0)
            return;
            
        pSol.push_back(num[next]);
        search(num, next, pSol, target - num[next], result);
        pSol.pop_back();
        
        search(num, next + 1, pSol, target, result);
    }

    
    vector<vector<int> > combinationSum(vector<int> &num, int target) 
    {
        vector<vector<int> > result;
        sort(num.begin(), num.end());
        vector<int> pSol;
        search(num, 0, pSol, target, result);
        return result;    
    }
};