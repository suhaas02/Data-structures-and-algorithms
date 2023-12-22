//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    
    vector<int> maxMeetings(int n,vector<int> &s,vector<int> &f){
        vector<pair<pair<int,int>, int>> vec;
        for(int i = 0; i < n; i++)
        {
            vec.push_back({{s[i], f[i]}, i + 1});
        }
        // for(auto x : vec)
        // {
        //     cout << x.first.first<<" "<<x.first.second<<" "<<x.second<<endl;
        // }
        
        sort(vec.begin(), vec.end(), [](const auto &x, const auto &y){
            return x.first.second < y.first.second;
        });
        vector<int> ans;
        ans.push_back(vec[0].second);
        int prev = vec[0].first.second;
        for(int i = 1; i < n; i++)
        {
            if(prev < vec[i].first.first)
            {
                ans.push_back(vec[i].second);
                prev = vec[i].first.second;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends