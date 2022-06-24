//decode XORed array
//problem link: https://leetcode.com/problems/decode-xored-array/submissions/
#include<bits/stdc++.h>
using namespace std;
void decode(vector <int>& encoded, int first)
{
    vector <int> ans;
    ans.push_back(first);
    for(int i = 0; i < encoded.size(); i++)
        ans.push_back(ans[i] ^ encoded[i]);
    for(int x: ans)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector <int> encoded;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int n0;
        cin>>n0;
        encoded.push_back(n0);
    }
    int first;
    cin>>first;
    decode(encoded, first);
    return 0;
}