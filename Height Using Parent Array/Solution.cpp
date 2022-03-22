// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
    int segment(char a)
    {
        
        if(a=='0')
        return 6;
        else if(a=='1')
        return 2;
        else if(a=='2')
        return 5;
        else if(a=='3')
        return 5;
        else if(a=='4')
        return 4;
        else if(a=='5')
        return 5;
        else if(a=='6')
        return 6;
        else if(a=='7')
        return 3;
        else if(a=='8')
        return 7;
        else if(a=='9')
        return 5;
    }
    
  
    string sevenSegments(string S, int N) {
        
        long long i,count = 0,see=0;
        string str="";
        for(i=0;i<N;i++)
        {
            
            count+= segment(S[i]);
            str=str+'0';
        
        }
        
        // cout<<i<<endl;
        
        // cout<<count<<endl;
        count=count-N*6;
        // cout<<count<<endl;
        for(int i=0;i<N;i++)
        {
            if(count==0)
            break;
            
            if(count>0)
            {
                str[i] = '8';
                count--;
            }
            else
            {
                if(count>-4)
                {
                    if(count==-3)
                    {
                        
                        str[i]='7';
                        count=0;
                    }
                    else if(count==-2)
                    {
                        str[i]='4';
                        count=0;
                    }
                    else if(count==-1)
                    {
                        str[i]='2';
                        count=0;
                    }
                }
                else
                {
                    str[i] = '1';
                    count=count+4;
                }
            }
        }

        while(str.back()=='0')
        {
            str.pop_back();
            str='0'+str;
        }

        
        
        
        
        
        return str;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        string S;
        cin>>S;

        Solution ob;
        cout << ob.sevenSegments(S,N) << endl;
    }
    return 0;
}  // } Driver Code Ends