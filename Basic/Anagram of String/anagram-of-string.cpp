//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
    unordered_map<char, int> mp;
    for(auto x : str1)
    {
        mp[x]++;
    }
    for(auto x : str2)
    {
        mp[x]--;
    }
    int count = 0;
    // for(auto x : mp)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    for(auto x : mp)
    {
        if(x.second < 0 or x.second > 0)
            count += abs(x.second);
    }
    return count;
}