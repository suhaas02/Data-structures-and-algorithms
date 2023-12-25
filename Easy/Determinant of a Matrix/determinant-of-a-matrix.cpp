//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function for finding determinant of matrix.
    int determinantOfMatrix(vector<vector<int> > matrix, int n)
    {
        // code here 
        if (n == 1){
            return matrix[0][0];
        }
        
            int ans = 0;
            for (int i = 0; i < n; i++){
                vector<vector<int>> temp(n - 1, vector<int> (n - 1));
                int l = 0, m = 0;
                //cout << i << ":" << endl;
                for (int j = 0; j < n; j++){
                    if (j == 0){
                        continue;
                    }
                    for (int k = 0; k < n; k++){
                        if (k == i){
                            continue;
                        }
                        temp[l][m++] = matrix[j][k];
                    }
                    l++;
                    m = 0;
                }
                /*
                for (int p = 0; p < n - 1; p++){
                    for (int q = 0; q < n - 1; q++){
                        cout << temp[p][q] << " ";
                    }
                    cout << endl;
                    
                }
                cout << endl;
               */
                if (i % 2 == 0){
                    ans += matrix[0][i] * determinantOfMatrix(temp, n - 1);
                }  
                else {
                    ans += -1 * matrix[0][i] * determinantOfMatrix(temp, n - 1);
                }
            }
            //cout << "ans : " << ans << endl;
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        int result = ob.determinantOfMatrix(matrix, n);
        cout<<result<<endl;
    }
    return 0;
}
// } Driver Code Ends