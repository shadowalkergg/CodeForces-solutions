//This is an easy question- good enough for someone who has solved a couple of two pointer problems. 
//The core idea is simple- difference between the elements of a subarray should not be greater than 5.


#include <bits/stdc++.h>3
using namespace std;
 
int main() {
	int n;cin>>n;
	vector<int> a(n);
	for(auto&x:a) cin>>x;
	sort(a.begin(),a.end());
	int ans=0;
	int l=0;

	for(int i=0;i<n;i++){
	    
	    if(a[i]-a[l]>5) l++; //if the difference between two elements is greater than 5, check the next element.
	    
	    ans=max(ans,i-l+1); //here, the left and right indices can be subtracted in order to find an optimal answer
	    
	    }
	
cout<<ans;
}
