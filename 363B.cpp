//This is an easy question- good enough for a newbie to learn about sliding window. 
//The core idea is simple- sum of k elements, subtract the first element from it and add the k+1th element.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;cin>>n;int k;cin>>k;
	std::vector<long long> a(n);
	
	for(auto&x:a) cin>>x;
	
	long long sum=0;
	
	for(int i=0;i<k;i++)
        sum+= a[i];
	    
	    long long minsum=sum;
	    int mini=0;
	    
	    for(int i=k;i<n;i++){
	        sum+=a[i];
	        sum-=a[i-k];
	        
	        if(minsum>sum){
	        minsum=sum;
	        
	            mini=i-k+1;
	        }
	        
	    }
	    
	    cout<<mini+1;
	    
	}


