    vector<long long> out;
    
    void check(Node* root,long long carry)
    {
        long long current = carry*(root->data);
        // cout<<current;
        if(root->left==NULL&&root->right==NULL)
        {
            out.push_back(current);
        }
        
        if(root->left!=NULL)
        check(root->left,current);
        
        if(root->right!=NULL)
        check(root->right,current);
        
    }
    
    long long findMaxScore(Node* root)
    {
        long long output=0;
        
        check(root,1);
        
        // output = out[0];
        for(int i=0;i<out.size();i++)
        {
            if(output<out[i])
            output=out[i];
        }
        
        return output;
        
    }