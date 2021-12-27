//Day - 23 topic: maps
//problem link: https://www.geeksforgeeks.org/given-an-array-of-of-size-n-finds-all-the-elements-that-appear-more-than-nk-times/
//Given an array of size 'n' and number 'k', find all the elements that appear more than 'n/k' times.
//Problem approach: Find frequency of elements using unordered map.
#include<bits/stdc++.h>
using namespace std;
void findElement(int arr[],int n, int k)
{
    int x = n / k;
    unordered_map<int , int> num;
    for (int i = 0; i < n; i++){
        num[arr[i]]++;
    }
    for(auto i : num){
        if (i.second > x)
        {
            cout<<i.first<<endl;
        }
        
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    findElement(arr,n,k);
}