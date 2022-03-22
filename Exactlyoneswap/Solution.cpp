// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution
{
    
    
public:
    long long countStrings(string S)
    {
        vector<long long> alph(26,0);
        long long flag=0,x,y;
        long long n = S.size(),result=0;
        
        
        // result = (n*(n-1))/2;
        
        
        for(int j=0;j<n;j++)
        {
            alph[((char)S[j]-97)]++;
        }
        
        for(int j=0;j<26;j++)
        {
            // cout<<result<<" "<<(n)<<" "<<alph[j]<<endl;
            if(alph[j]==1)
            {
                n=n-1;
                result+=n;
            
            }
            else if(alph[j]>1)
            {
                if(flag==0)
                {
                    result+=1;
                    n=n-alph[j];
                    result+=n*alph[j];
                    flag=1;
                    
                }
                else
                {
                    n=n-alph[j];
                    result+=n*alph[j];
                    flag=1;
                }
                
            }
        }
        
        
        
        // n=(n*(n-1))/2;
        
        return result;
    }
};


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution ob;
        long long ans = ob.countStrings(S);
        cout<<ans<<endl;
    }
    return 0;
}   // } Driver Code Ends