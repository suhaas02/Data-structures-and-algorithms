class Solution {
public:
    int m,n;
    string minWindow(string s, string t) {
        m=s.size(),n=t.size();
        if(m<n) 
            return "";
        unordered_map<char,int> mp;
        for(auto i : t){
            mp[i]++;
        }
        int i=0,j=0;
        int reqCount = n;
        int start_i  = 0;
        int minWindowSize = INT_MAX;
        while(j<m){
            char ch = s[j];
            if(mp[ch]>0){
                reqCount--;
            }
            mp[ch]--;
            while(reqCount==0){
                //start shrinking the window
                int currWindowSize = j-i+1;
                if(minWindowSize > currWindowSize){
                    minWindowSize = currWindowSize;
                    start_i=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    reqCount++;
                }
                i++;
            }
            j++;
        }
        return minWindowSize==INT_MAX ? "" : s.substr(start_i,minWindowSize);
    }
};