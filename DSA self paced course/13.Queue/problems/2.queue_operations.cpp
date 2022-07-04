//queue operations 
//problem link: https://practice.geeksforgeeks.org/problems/queue-operations/1


// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;



//approch - 1
 // } Driver Code Ends
//User function Template for C++
// Helper class Solution to implement 
// insert() and findFrequency()
// class Solution{
//     public:
//     // Function to insert element into the queue
//     void insert(queue<int> &q, int k){
//         // Your code here
//         q.push(k);
//     }
    
//     // Function to find frequency of an element
//     // return the frequency of k
//     int findFrequency(queue<int> &q, int k){
//         // Your code here
//         int n = q.size(), count = 0;
//         for (int i = 0; i < n; i++){
//             int temp = q.front();
//             if (temp == k){
//                 count++;
//             }
//             q.pop();
//             q.push(temp);
//         }
//         return count == 0? -1: count;
//     }
    
// };

//approach -2 
//using unordered map
class Solution{
    unordered_map<int, int> freq;
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
        q.push(k);
        freq[k]++;
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        
        return freq.count(k) > 0? freq[k]: -1;
    }
    
    
};



// { Driver Code Starts.
int main() {
    
		int testcase;
		cin>>testcase;
		
		while(testcase-- > 0){
		    // Declaring Queue
		    queue<int> q;
		    int n, k;
		    cin>>n;
		    
		    // Invoking object of Geeks class
		    Solution obj;
		    
		    for(int i = 0;i<n;i++){
		        cin >> k;
		        obj.insert(q, k);
		    }
		   
		    int m;
		    cin >> m;
		    for(int i = 0;i<m;i++){
		        cin >> k;
		        int f = obj.findFrequency(q, k);
		        if(f != 0){
		            cout<<f<<endl;
		        }
		        else{
		            cout<<"-1\n";
		        }
		    }
		}
	return 0;
}  // } Driver Code Ends