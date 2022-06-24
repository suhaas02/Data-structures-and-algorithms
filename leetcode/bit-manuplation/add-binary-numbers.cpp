// //program to add 2 binary numbers
// //problem link: https://leetcode.com/problems/add-binary/
// #include<bits/stdc++.h>
// using namespace std;
// //approach - 1;
// int decimalConversion(int num){
//     int decValue = 0;
//     int base = 1;
//     int temp = num;
//     while (temp){
//         int lastDigit = temp % 10;
//         temp = temp % 10;
//         decValue += lastDigit * base;
//         base = base * 2;
//     }
//     return decValue;
// }
// int main(){
//     int binaryNumber;
//     cin>>binaryNumber;
//     cout<<decimalConversion(binaryNumber)<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
//approach - 2 --> using string to store the binary number.
int decimalConversion(string n){
    int decValue = 0;
    int base = 1;
    int lenBinary = n.length();
    for (int i = lenBinary - 1; i >= 0; i--){
        if (n[i] == '1'){
            decValue += base;
        }
        base = base * 2;
        
    }
    return decValue;
}
int main(){
    string binaryNumber;
    cin>>binaryNumber;
    cout<<decimalConversion(binaryNumber)<<endl;
    return 0;
}