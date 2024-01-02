class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        for(int i=0;i<s.size();i++){
            if(s[i]!= ' '){
                string ins = "";
                while(i<s.size() && s[i]!=' '){
                    ins+=s[i];
                    ++i;
                }
                st.push(ins);
            }
            
        }

        string ans;
        while(!st.empty()){
            ans+=st.top();
            ans+=" ";
            st.pop();
        }
        ans.pop_back();

    return ans;
    }
};

// Pls Do Upvote if you found this helpful <3