//set stl 

// //find() function in stl;
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     set<int> s;
//     s.insert(10);
//     s.insert(5);
//     s.insert(20);
//     auto it = s.find(10);
//     if (it == s.end())
//     {
//         cout<<"No found"<<endl;
//     }
//     else
//     {
//         cout<<"Found"<<endl;
//     }
//     return 0;
// }

//basic intro stl to check how the data being pushed into the stack is in sorted order or not
//for the data to be in ascending order
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     set<int> s;
//     s.insert(10);
//     s.insert(5);
//     s.insert(20);
//     for(int x : s)
//     {
//         cout<<x<<endl;
//     }
//     return 0;
    
// }

// //for data to be in descending order
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     set<int,greater<int>> s;
//     s.insert(10);
//     s.insert(5);
//     s.insert(20);
//     for(int x : s)
//     {
//         cout<<x<<endl;
//     }
//     return 0;
    
// }

// //clear() in bst
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     set<int> s;
//     s.insert(10);
//     s.insert(5);
//     s.insert(20);
//     s.clear();
//     cout<<s.size()<<endl;
//     return 0;
    
// }

//erase() function
//approach - 1
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     set<int> s;
//     s.insert(10);
//     s.insert(7);
//     s.insert(5);
//     s.insert(20);
//     s.insert(5);
//     s.erase(5);
//     for(int x : s)
//     {
//         cout<<x<<endl;
//     }
//     return 0;
    
// }

//approach - 2 using iterator
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    auto it = s.find(5);
    //to remove single element
    //s.erase(it);

    //to remove certain range
    s.erase(it,s.end());
    for(int x : s)
    {
        cout<<x<<endl;
    }
    return 0;
    
}