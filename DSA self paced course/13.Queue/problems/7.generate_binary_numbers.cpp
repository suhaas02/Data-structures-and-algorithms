//generate binary numbers using queue

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	// Your code here
    queue<string> q;
    vector<string> v;
    q.push("1");
    
    for (int i = 0; i < N; i++)
    {
        string curr = q.front();
        v.push_back(curr);
        q.pop();
        q.push(curr + "0");
        q.push(curr + "1");
    }
    return v;

    
	
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends