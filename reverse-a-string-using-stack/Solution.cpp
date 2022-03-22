// 



// https://practice.geeksforgeeks.org/problems/special-matrix4201/1#




    
    bool isValid(int x,int y,int n,int m,vector<vector<int>> db)
    {
        if(x>n||y>m)
        return false;
        
        if(db[x][y]<0)
        return false;
        
        return true;
    }
    
    
	int FindWays(int n, int m, vector<vector<int>>blocked_cells){
	    
	    vector<vector<int>> db(n+1,vector<int>(m+1,0));
	    queue<pair<int,int>> Q1;
	    queue<pair<int,int>> Q;
	    queue<pair<int,int>> Q2;
	    pair<int,int> t;
	    
	    Q1.push({1,1});
	    db[1][1]++;
	    for(int i=0;i<blocked_cells.size();i++)
	    {
	        db[blocked_cells[i][0]][blocked_cells[i][1]]--;
	    }
	    
	    
	    while(!Q1.empty())
	    {
	        Q2=Q1;
	        Q1=Q;
	        int flag=0;
    	    while(!Q2.empty())
    	    {
	            t=Q2.front();
	            Q2.pop();
	            int a=t.first,b=t.second;
	            if(isValid(a+1,b,n,m,db))
	            {
	                if((db[a+1][b]+db[a][b])>=1000000007)
	                db[a+1][b]-=1000000007;
	                
	                db[a+1][b]+=db[a][b];
	                if(Q1.empty()==false)
	                {
	                    if(Q1.back().first!=(a+1) && Q1.back().second!=b)
    	                Q1.push({a+1,b});
	                }
	                else
	                {
	                    Q1.push({a+1,b});
	                }
	            }
	            if(isValid(a,b+1,n,m,db))
	            {
	                if((db[a][b+1]+db[a][b])>=1000000007)
	                db[a][b+1]-=1000000007;
	                
	                db[a][b+1]+=db[a][b];
	                if(Q1.empty()==false)
	                {
	                    if(Q1.back().first!=a && Q1.back().second!=(b+1))
    	                Q1.push({a,b+1});
	                }
	                else
	                {
	                    Q1.push({a,b+1});
	                }
	            }
	            
    	    }

	    }
	    
	    if(db[n][m]<0)
	    return 0;
	    
	    return db[n][m];
	    
	}