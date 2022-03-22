// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    vector<vector<int>> computeBeforeMatrix(int N, int M, vector<vector<int>> after){
        
        vector<vector<int>> output;
        vector<int> out;
        int head=(N-1),temp1,temp;
        
        
        while(head)
        {
            
            for(int i = (M-1) ; i>=0 ; i--)
            {
                after[head][i] = after[head][i] - after[head-1][i];
            }
            
            head--;
        }
        
        for(int i = 0 ; i < N ; i++ )
        {
            temp=after[i][0];
            for(int j = 1 ; j < M ; j++ )
            {
                
                temp1=after[i][j];
                after[i][j] =  after[i][j] - temp;
                temp=temp1;
            }
        }
        
        
        
        
        return after;
        
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M; 
        vector<vector<int>> after(N,vector<int>(M));
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                cin>>after[i][j];
            }
        } 
        Solution obj;
        vector<vector<int>> before=obj.computeBeforeMatrix(N,M,after); 
        for(int i=0;i<before.size();i++){
            for(int j=0;j<before[i].size();j++){
                cout<<before[i][j]<<' ';
            } 
            cout<<endl;
        }
    }
}  // } Driver Code Ends