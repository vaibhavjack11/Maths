
    public:
    
    int check(int i,int j,int k)
    {
        
        if(((i+j)>k)&&((j+k)>i)&&((k+i)>j))
        return 1;
        
        return 0;
    }
    
    
    
    
    vector<int> canMakeTriangle(vector<int> A, int N){
        vector<int> out;
        int i=0,j=1,k=2;
        for(;k<N;i++,j++,k++)
        {
            out.push_back(check(A[i],A[j],A[k]));
            
        }
        
        
        return out;
    }