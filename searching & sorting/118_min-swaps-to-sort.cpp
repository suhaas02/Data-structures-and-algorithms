//minimum swaps to sort
//problem link: https://practice.geeksforgeeks.org/problems/minimum-swaps/1
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
	int minSwaps(vector<int>&nums){
	    int n = nums.size(),swaps=0;
        vector<pair<int ,int>>v(n);
        for(int i=0;i<n;i++)
        v[i] = {nums[i] , i};
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(i == v[i].second)
            continue;
            else{
                swaps++;
                swap(v[i] , v[v[i].second]);
                i--;
            }
        }
    return swaps;
	}
};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
} 