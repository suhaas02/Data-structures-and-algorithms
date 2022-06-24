//count the number of consistent strings
//problem link: https://leetcode.com/problems/count-the-number-of-consistent-strings/
#include<bits/stdc++.h>
using namespace std;
int countConsistentStrings(string allowed, vector<string>& words)
{
    unordered_map<char,int> mp;
    for(auto c: allowed){
        mp[c] = 1;
    }
    int ans = 0;
    for(auto s: words){
        int f = 1;
        for(auto c: s){
            if (mp[c] == 0){
                f =0;
                break;
            }        
        }
        if (f == 1){
            ans++;
        }   
    }
    return ans;
}
int main()
{
    string allowed;
    cin>>allowed;
    vector<string> words;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string n0;
        cin>>n0;
        words.push_back(n0);
    }
    cout<<countConsistentStrings(allowed, words)<<endl;
    return 0;
}