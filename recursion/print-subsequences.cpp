//print subsequences of a string
//problem link: https://www.pepcoding.com/resources/online-java-foundation/recursion-with-arraylists/get_subsequence/topic
#include<bits/stdc++.h>
using namespace std;
void printF(int i, vector<int> &ds,string s,int n)
{
    if (i == n)
    {
        for(auto it: ds)
        {
            cout<<it<<" ";
        }
        if (ds.size() == 0)
        {
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ds.push_back(s[i]);
    printF(i + 1,ds,s,n);
    ds.pop_back();
    printF(i + 1,ds,s,n);
}
int main()
{
    string s;
    cin>>s;
    int len = s.length();
    vector <int> ds;
    printF(0,ds,s,len);
    return 0;
}