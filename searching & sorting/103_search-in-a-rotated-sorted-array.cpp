//searching an element in an roated sorted array
//problem link: https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/
#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) {
        auto it = find(nums.begin(), nums.end(), target);
        if(it != nums.end())
        {
            int index = it - nums.begin();
            return index;
        }
        else
            return -1;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int tar;
        vector <int> array;
        int n;
        for (int i = 0; i < n; i++)
        {
            cin>>n;
            array.push_back(n);
        }
        cin>>tar;
        int ans = search(array,tar);
        cout<<ans<<endl;
    }
    
}