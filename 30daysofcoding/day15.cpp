// //Day -15 Topic: maps
// //count pairs with given sum
// //question link: https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#
#include <bits/stdc++.h>
using namespace std;
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        map<int,int> sum;
        int count = 0;
        for (int i = 0; i < n; i++){
            if (sum.find(k - arr[i]) != sum.end()){
                auto it = sum.find(k - arr[i]);
                count = count + it->second;
            }
            sum[arr[i]]++;
        }
        return count;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
} 


//Day-15 topic: Arrays
//Common elements
//problem link: https://practice.geeksforgeeks.org/problems/common-elements1132/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            // vector <int> temp;
            // int i = 0, j = 0, k = 0;
            // while (i < n1 && j < n2 && k < n3)
            // {
            //     if (A[i] == B[j] && B[j] == C[k])
            //     {
            //         temp.push_back(A[i]);
            //         i++;
            //         j++;
            //         k++;
            //     }
            //     else if (A[i] < B[j])
            //     {
            //         i++;
            //     }
            //     else if (B[j] < C[k])
            //     {
            //         j++;
            //     }
            //     else
            //     {
            //         k++;
            //     }
            // }
            // return temp;
            int i = 0, j = 0, k = 0;
            while (i < n1 && j < n2 && k < n3)
            {
                if (A[i] == B[j] && B[j] == C[k])
                {
                    cout<<A[i]<<" ";
                    i++;
                    j++;
                    k++;
                }
                else if (A[i] < B[j])
                {
                    i++;
                }
                else if (B[j] < C[k])
                {
                    j++;
                }
                else
                {
                    k++;
                }
                
            }
            return;
        }

};
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        Solution ob; 
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
} 