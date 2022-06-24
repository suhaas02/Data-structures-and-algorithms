//reverse a string
//problem link: https://leetcode.com/problems/reverse-string/
#include<bits/stdc++.h>
using namespace std;
void reverseString(vector<char>& s) {
    reverse(s.begin(), s.end());
    for(auto x: s)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
// void reverseString(vector<char>& s)
// {
//     int left = 0;
//     int right = s.size() - 1;
//     while(left < right){
//         char tmp = s[left];
//         s[left++] = s[right];
//         s[right--] = tmp;
//     }
// }
int main()
{
    vector<string> s;
    cout<<"Enter the number of characters in the string"<<endl;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string n0;
        cin>>n0;
        s.push_back(n0);
    }
    reverseString(s);
    
}

