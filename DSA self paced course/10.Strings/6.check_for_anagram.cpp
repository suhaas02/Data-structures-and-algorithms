//check for anagram


// //naive approach
// //tc: 0(NlogN)
#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2, int ls1,int ls2)
{
    if (ls1 != ls2)
    {
        return false;
    }
    else
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(), s2.end());
        if (s1 == s2)
        {
            return true;
        }
        else
        {
            return false; 
        }
        
        
    }
    
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int ls1 = s1.length();
    int ls2 = s2.length();
    cout<<isAnagram(s1,s2,ls1,ls2);
    return 0;
}

//efficient approach
