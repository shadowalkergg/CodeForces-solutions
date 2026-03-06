//frequency of the largest element is always the answer.

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while(t--){
    int n; cin >> n;
    vector<int> a(n);
    for (auto& x : a) cin >> x;

    int ans=0;
    
    int maxele=*max_element(a.begin(),a.end());
    
    
    for(int i=0;i<n;i++){
     if(maxele==a[i]) ans++;   
    }
    
    cout<<ans<<endl;
    
    
    }
}