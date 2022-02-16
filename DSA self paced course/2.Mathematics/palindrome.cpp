//checking if a number or string is a palindrome or not 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rev = 0;
    int temp = n;
    while (temp != 0){
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10;
    }
    cout<<rev<<endl;
    if (rev == n){
        cout<<"Is a palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
    return 0;
}
//time complexity: O(N);