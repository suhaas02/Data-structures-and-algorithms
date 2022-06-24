//finding the index of the leftmost repeating character
//naive approach
//time complexity: O(N ^ 2);
//SPACE : 0(1);
// #include<bits/stdc++.h>
// using namespace std;
// int leftMost(string str)
// {
//     for (int i = 0; i < str.length(); i++)
//     {
//         for (int j = i + 1; j < str.length(); j++)
//         {
//             if (str[i] == str[j])
//             {
//                 return i;
//             }
            
//         }
        
//     }
//     return -1;
// }
// int main()
// {
//     string str;
//     cin>>str;
//     int flag;
//     cout<<leftMost(str);
//     return 0;
// }


//efficient approach
