//bishu and soldiers
//problem link: https://web.archive.org/web/20201130203759/https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/bishu-and-soldiers/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,m;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cin>>q;
    int sum = 0,count = 0;
    while (q--){
        cin>>m;
        for (int i = 0; i < n; i++){
            if (arr[i] <= m){
                count++;
                sum += arr[i];
            }
        }
        cout<<count<<" "<<sum<<endl;
    }
    return 0;
}