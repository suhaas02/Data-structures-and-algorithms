//map stl

//intro
//if there are 2 same keys with different values,
//then the latest key value pair added will be ignored
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,int> m;
//     m.insert({10,200});
//     m[5] = 100;
//     m.insert({3,300});
//     m.insert({3,400});
//     for(auto &x: m)
//     {
//         cout<<x.first<<" "<<x.second<<" ";
//     }
//     return 0;
// }


//just adding the key , then it justifies its value to be zero
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,int> m;
//     m.insert({10,200});
//     m[5] = 100;
//     cout<<m.size()<<endl;
//     cout<<m[20]<<endl;
//     cout<<m.size()<<endl; 
//     for(auto &x: m)
//     {
//         cout<<x.first<<" "<<x.second<<" ";
//     }
//     return 0;
// }


// //updating the values in map
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,int> m;
//     m.insert({10,200});
//     cout<<m.size()<<endl;
//     m[10] = 100; // updating value through reference
//     cout<<m.size()<<endl;
//     return 0;
// }


//at operator
//works same like adding data through square brackets
//but if the value of the pair of the key that needs to be updated is not
//available then it gives out of range error.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,int> m;
//     m.insert({10,200});
//     m[5] = 100;
//     m.at(20) = 300;
//     cout<<m.size()<<endl;
//     return 0;
// }

//begin gives address of the first element 
//end points to the element beying the last element
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,int> m;
//     m.insert({10,200});
//     m[5] = 100;
//     m.insert({3,300});
//     m.insert({3,400});
//     for(auto it = m.begin();it != m.end();it++)
//     {
//         cout<<(*it).first<<" "<<(*it).second<<" ";
//     }
//     return 0;
// }


//find() function takes the key value and finds whether 
//the required key value pair is present in the map or not?
//any container whethet it is vector,set,map, it only searches the key 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,int> m;
//     m.insert({10,200});
//     m[5] = 100;
//     m.insert({3,300});
//     if (m.find(5) == m.end())
//     {
//         cout<<"Not found"<<endl;
//     }
//     else
//     {
//         cout<<"Found"<<endl;
//     }
//     return 0;
// }

//count function tells whether a key is present or not 
//it returns either 1 or 0
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,int> m;
//     m.insert({10,200});
//     m[5] = 100;
//     m.insert({3,300});
//     if (m.count(5) == 0)
//     {
//         cout<<"Not found"<<endl;
//     }
//     else
//     {
//         cout<<"Found"<<endl;
//     }
    
    
//     return 0;
// }

//erase() function
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,int> m;
//     m.insert({10,200});
//     m[5] = 100;
//     m.insert({3,300});
//     m.erase(5);
//     cout<<m.size()<<endl;
//     return 0;
// }

//erase() function can also receive iterator as parameter
//it can also get a range as a parameter
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,int> m;
//     m.insert({10,200});
//     m[5] = 100;
//     m.insert({3,300});
//     m.erase(m.find(5),m.end());
//     cout<<m.size()<<endl;
//     return 0;
// }