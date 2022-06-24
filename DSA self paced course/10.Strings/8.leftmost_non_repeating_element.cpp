//left most non-repeating elements
//naive approach
//tc: O(N); SPACE: O(1)

// #include<bits/stdc++.h>
// using namespace std;
// int nonRep(string str)
// {
//     for (int i = 0; i < str.length(); i++)
//     {
//         bool flag = false;
//         for (int j = 0; j < str.length(); j++)
//         {
//             if (i != j && str[i] == str[j])
//             {
//                 flag = true;
//                 break;
//             }
            
//         }
//         if (flag = false)
//         {
//             return i;
//         }
        
//     }
//     return -1;
// }

// int main()
// {
//     string str;
//     cin>>str;
//     cout<<nonRep(str);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256;
int nonRep(string str)
{
    int count[CHAR] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }
    for (int j = 0; j < str.length(); j++)
    {
        if (count[str[j]] == 1)
        {
            return j;
        }
        
    }
    return -1;
}
int main()
{
    string str;
    cin>>str;
    cout<<nonRep(str);
    return 0;
}