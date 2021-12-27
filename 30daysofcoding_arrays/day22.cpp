//Day - 22, topic:arrays
//problem link: https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem/0
//Chocolate distribution problem
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());
		long long i=0,diff;
       	diff=a[i+m-1]-a[i];
       	for(i=1;i<n;i++){
           if((i+m-1)!=n ){
               diff=min(diff,(a[(i+m-1)]-a[i]));
           	}
           	else{
               break;
           	}
       }
       return diff;
    }   
};
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}