//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        double ans=0;
       vector<pair<double,int>> v;
       for(int i=0;i<n;i++){
           double a=arr[i].value;
           double b=arr[i].weight;
           double c=a/b;
           v.push_back({c,i});
        //   cout<<c<<endl;
       }
       sort(v.begin(),v.end());
       for(int i=n-1;i>=0;i--){
           if(W<arr[v[i].second].weight){
               double a=W;
               
               ans+=a*v[i].first;
               break;
           }
           else{
               ans+=arr[v[i].second].value;
               W-=arr[v[i].second].weight;
           }
        //   cout<<W<<endl;
       }
       return ans;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(6)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends