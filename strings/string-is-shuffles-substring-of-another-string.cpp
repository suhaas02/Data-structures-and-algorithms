//check if the given string is shuffles substring of another string
//problem link: https://www.geeksforgeeks.org/check-if-the-given-string-is-shuffled-substring-of-another-string/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    string str1,str2;
    cin>>str1>>str2;
    n = str1.length();
    m = str2.length();
    if (n> m)
    {
        cout<<"Not a substring"<<endl;
    }
    else
    {
        sort(str1.begin(), str1.end());
        for (int i = 0; i < m; i++){
            if (i + n - 1 >= m){
                cout<<"Not a substring"<<endl;
            }
            string str = "";
            for (int j = 0; j < n; j++){
                str.push_back(str2[i + j]);
            }
            sort(str.begin(),str.end());
            if (str == str1)
            {
                cout<<"Is a substring"<<endl;
            }
        }
    }
    return 0;
}