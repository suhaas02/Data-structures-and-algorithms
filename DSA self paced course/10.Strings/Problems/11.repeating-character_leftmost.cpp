//Repeating Character - First Appearance Leftmost 
#include<bits/stdc++.h>
using namespace std;
int repChar(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                return i;
            }
            
        }
        
    }
    
}
int main()
{
    string str;
    cin>>str;
    cout<<repChar(str);
    return 0;
}