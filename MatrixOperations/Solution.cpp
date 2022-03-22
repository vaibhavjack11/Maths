// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix){
        
        int row=matrix.size(),col=matrix[0].size(),x,y;
        pair<int, int> out;
        pair<int, int> temp;
        out.first = 0;
        out.second = 0;
        temp.first = 0;
        temp.second = 0;
        x=1;
        y=0;
        
        while(true)
        {
            
            temp.first+=y;
            temp.second+=x;
            
            
           if(matrix[temp.first][temp.second] == 0)
           {
               if((out.first+y)<0||(out.first+y)>row||(out.second+x)<0||(out.second+x)>col)
               {
                   
                   
               }
               else
               {
                   if()
               }
           }
            
        }
        
         
    }

};

// { Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}  // } Driver Code Ends