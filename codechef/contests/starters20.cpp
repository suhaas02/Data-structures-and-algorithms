// //starters 20
// //genes
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    if ((a == "R" && b == "B") || (a == "B" && b == "R"))
    {
        cout<<"R"<<endl;
    }
    else if ((a == "B" && b == "G") || (a == "G" && b == "B"))
    {
        cout<<"B"<<endl;
    }
    else if ((a == "G" && b == "R") || (a == "R" && b == "G"))
    {
        cout<<"R"<<endl;
    }
    else if (a == b)
    {
        cout<<a<<endl;
    }
    return 0;
}

// //CHEF AND PAL
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int s[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>s[i];
//         }
        
//     }
    
// }