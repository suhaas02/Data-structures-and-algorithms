//finding ASCII value of characters

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char x = 'a';
//     cout<<(int)x;
//     return 0;
// }

//print frequencies of characters in 
//order in a string of lower case alplabets
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str = "geeksforgeeks";
//     int count[26] = {0};
//     for (int i = 0; i < str.length(); i++)
//     {
//         count[str[i] - 'a']++;
//     }
//     for (int j = 0; j < 26; j++)
//     {
//         if (count[j] > 0)
//         {
//             cout<<(char)(j + 'a')<<" "<<count[j]<<endl;
//         }
        
//     }
//     return 0;
// } 


//c style strings in c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[] = {'g', 'f', 'g'};
    cout<<str;
    return 0; 
}
