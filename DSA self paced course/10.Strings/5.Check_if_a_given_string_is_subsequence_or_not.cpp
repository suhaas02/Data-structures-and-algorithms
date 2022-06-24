//check if a givem string is a subsequence or not

//iterative approach;
#include<bits/stdc++.h>
using namespace std;
bool isSubsequence(string s1, string s2,int n, int m)
{
    int j = 0;
    for(int i = 0; i < n && j < m; i++)
    {
        if (s1[i] == s2[j])
        {
            j++;
        }
        
    }
    return (j == m);
}
int main()
{
    string s1;
    cin>>s1;
    int n = s1.length();
    string s2;
    cin>>s2;
    int m = s2.length();
    cout<<isSubsequence(s1,s2,n,m);
    return 0;
    
}