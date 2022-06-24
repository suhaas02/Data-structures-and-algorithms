//A Program to check if strings are rotations of each other or not
//problem link: https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/
//KMP string matching algorithm.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st1,st2;
    cin>>st1>>st2;
    string strot = st1 + st2;
    if (st1.length() != st2.length()){
        cout<<"No"<<endl;
    }
    if (strot.find(st2) != string::npos){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
