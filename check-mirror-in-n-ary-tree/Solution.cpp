
#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        
        vector<vector<int>> db(n+1,vector<int>(0));
        
        if(n==1)
        return 1;
        
        
        for(int i=0;i<e*2;i=i+2)
        {
            db[A[i]].push_back(A[i+1]);
        }
        
        
        for(int i=0;i<e*2;i=i+2)
        {
            if(B[i+1] == db[B[i]][db[B[i]].size()-1])
            db[B[i]].pop_back();
            else
            return 0;
            
        }

        return 1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,e;
        
        cin>>n>>e;
        int A[2*e], B[2*e];
        
        for(int i=0; i<2*e; i++)
            cin>>A[i];
            
        for(int i=0; i<2*e; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.checkMirrorTree(n,e,A,B) << endl;
    }
    return 0;
}  // } Driver Code Ends