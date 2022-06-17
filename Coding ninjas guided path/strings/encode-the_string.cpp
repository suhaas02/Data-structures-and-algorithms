//encode the string

#include<bits/stdc++.h>
using namespace std;
void stringEncode(string &message)
{
    //   Write your code here.
    int count = 0;
    for(int i = 0; i < message.length(); i++)
    {
        if(message[i] != message[i + 1])
        {
            cout<<message[i];
            count = 1;
        
        }
        else
        {
            cout<<message[i];
            count++;
        }
        cout<<count;
    }
}
int main()
{
    string str;
    cin>>str;
    stringEncode(str);
}