class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> freq(26, 0);
        int i=0, j=0, count=0;
        while(i<s.length()-2){
            char ch1 = s[i];
            freq[ch1-'a']++;
            if(freq[ch1-'a'] > 1) {
                i++;
                continue;
            }
            j = s.length()-1;
            while(j > i+1){
                if(s[j]==ch1) break;
                j--;
            }
            char ch2 = s[j];
            vector<int> map(26, 0);
            for(int k=i+1; k<j; k++){
                char ch = s[k];
                map[ch-'a']++;
                if(map[ch-'a'] > 1) continue;
                else count++;
            }
        i++;
        }
        return count;
    }
};