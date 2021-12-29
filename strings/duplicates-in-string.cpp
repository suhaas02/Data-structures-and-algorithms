//print all the duplicates in the input string
//problem link: https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/
#include<bits/stdc++.h>
using namespace std;
int printDuplicates(string dup)
{
    //using map;
    map<char, int> count;
    for (int i = 0; i < dup.length(); i++){
        count[dup[i]]++;
    }
    for(auto it: count){
        cout<<"Character: "<<it.first<<" --> count: "<<it.second<<endl;
    }
    return 0;
}
int main()
{
    string dup;
    cin>>dup;
    printDuplicates(dup);
    return 0;
}