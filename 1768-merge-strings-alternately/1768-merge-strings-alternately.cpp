class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        string temp;
        int i = 0,j = 0;
        while(i < n ||j < m)
        {
            if(i < n)
            {
                temp += word1[i];
                
            }
            if(j < m)
            {
                temp += word2[i];
                
            }
            i++;
            j++;
        }
        return temp;
    }
};