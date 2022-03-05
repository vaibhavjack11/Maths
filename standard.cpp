#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;


int mean(int arr[],int n){
    
    int sum=0;
    for(auto i = 0; i < n; i++ )
    {
        sum+=arr[i];
    }
    
    return sum/n;
    
}


int median(int arr[],int n){
    int i;
    sort(arr,arr+n);
    
    i=n/2;
    
    if(n&1)
    {
        return arr[i];
    }
    else
    {
        i--;
        return (arr[i]+arr[i+1])/2;
    }
    
    
}

vector<int> mode(int arr[],int n){
    
   map<int,int> data;
   int max=1;
   vector<int> out;
   out.push_back(0);
    
    for(auto i = 0; i<n ;i++)
    {
        
        data[arr[i]]++;
    }
    
    map<int,int> :: iterator it;
    
    for(it = data.begin();it!=data.end();it++)
    {
        // cout<<it->first<<" "<<it->second<<endl;
        
        
        if(max==it->second)
        {
            out.push_back(it->first);
        }
        else if(max<it->second)
        {
            out.clear();
            out.push_back(it->first);
            max=it->second;
        }
        
    }
    
    
    
    return out;
}

void p(vector<int> V)
{
    for(auto i = 0 ; i<V.size();i++)
    {
    cout<<V[i]<<"  ";    
        
    }
}


int variance(int arr[],int n,int m){
    
   map<int,int> data;
   int sum=0;
   vector<int> out;
   out.push_back(0);
    
    for(auto i = 0; i<n ;i++)
    {
        
        sum += pow(arr[i]-m,2);
    }
 
    
    return sum/n;
}


double standard(int n){
    
    
    return sqrt(n);
}



int main() {
	int arr[] = { 2,4,4,4,5,5,7,9 };
	int size = sizeof(arr)/sizeof(int);
// 	cout<<mean(arr,size)<<endl;
// 	cout<<median(arr,size)<<endl;
// 	p(mode(arr,size));
	cout<<variance(arr,size,mean(arr,size))<<endl;
	cout<<standard(variance(arr,size,mean(arr,size)))<<endl;
	
	
	return 0;
}
