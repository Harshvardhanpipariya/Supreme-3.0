//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    int row;
    int col;
    void solve(vector<vector<int>> m,vector<string> &ans,string s,int i,int j)
    {
        if(i<0||i>row||j<0||j>col||m[i][j]==0)
        return;
        
        if(i==row&&j==col)
        {
            ans.push_back(s);
            return;
        }
        
        m[i][j]=0;
        
            solve(m,ans,s+"D",i+1,j);
            solve(m,ans,s+"L",i,j-1);
            solve(m,ans,s+"R",i,j+1);
            solve(m,ans,s+"U",i-1,j);
        
        m[i][j]=1;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        row=n-1,col=n-1;
        solve(m,ans,"",0,0);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends