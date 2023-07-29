//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    vector<int> replaceWithRank(vector<int> &arr, int N){
        // priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
        // // vector<int> rank;
        // map<int,int> rank;
        // // int prev = -1;
        // for(int i = 0; i < N; i++)
        // {
        //     int temp = pq.top();
        //     pq.pop();
        //     // prev = temp
        //     // if(i > 0)
        //     rank.insert({temp, i + 1});
        // }
        // for(int i = 0; i < rank.size(); i++)
        // {
            
        // }
        // vector<int> ans;
        // for(int i = 0; i < N; i++)
        // {
        //     if(rank.find(arr[i]) != rank.end())
        //         ans.push_back(rank[arr[i]]);
        // }
        // return ans;
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int i = 0; i < N; i++)
        {
            pq.push({arr[i], i});
        }
        int count = 1;
        while(!pq.empty())
        {
            arr[pq.top().second] = count;
            int vis = pq.top().first;
            pq.pop();
            if(!pq.empty() and vis != pq.top().first)
                count++;
        }
        return arr;

    }

};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        vector<int> ans = obj.replaceWithRank(vec,n);
        for(int i = 0;i<n;i++) cout << ans[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends