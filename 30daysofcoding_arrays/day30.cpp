// //Day - 30,
// //problem link: https://practice.geeksforgeeks.org/problems/palindromic-array/0
// //Palinrdomic array.
// #include<iostream>
// #include<string.h>
// using namespace std;
// int PalinArray(int a[], int n);
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		int a[n];
// 		for(int i = 0; i < n; i++)
// 			cin>>a[i];
// 		cout<<PalinArray(a,n)<<endl;
// 	}
// }
// int PalinArray(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int ans = 0;
//         int temp = a[i];
//         while (temp > 0)
//         {
//             int rem = temp % 10;
//             temp = temp/10;
//             ans  = (ans * 10) + rem;
//         }
//         if (ans != a[i])
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

//Day - 30, topic: strings,
//problem link: https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1
//Array subset of another array.
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];
        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }
        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}
string isSubset(int a1[], int a2[], int n, int m) {
    //approach - 2
    // map <int,int> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     mp[a1[i]]++;
    // }
    // for (int j = 0; j < m; j++)
    // {
    //     if (mp.find(a2[j]) == mp.end())
    //     {
    //         return "No";
    //     }
    // }
    

    //approach - 1
    unordered_set <int> v1;
    int count = 0;
    for (int i = 0; i < n; i++){
        v1.insert(a1[i]);
    }
    int count = 0;
    for (int k = 0; k < m; k++){
        if (v1.find(a2[k]) != v1.end()){
            count++;
        }
    }
    if (count == m){
        return "yes";
    }
    else{
        return "no";
    }
}