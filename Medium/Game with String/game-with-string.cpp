//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char,int> mp;
        for(auto x : s)
        {
            mp[x]++;
        }
        priority_queue<int> pq;
        for(auto x : mp)
        {
            pq.push(x.second);
        }
        while(k--)
        {
            int t = pq.top();
            pq.pop();
            t--;
            if(t > 0)
                pq.push(t);
        }
        int count = 0;
        while(!pq.empty())
        {
            count += pow(pq.top(), 2);
            pq.pop();
        }
        return count;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends