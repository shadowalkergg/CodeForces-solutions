// it can be proved that in an unsorted array, the minimum number of elements present is alwats 1.
// in a sorted array, the answer is always equal to the length of the aray

    #include <bits/stdc++.h>
    using namespace std;
    
    int main() {
        
        int t;cin>>t;
        while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for (auto& x : a) cin >> x;
    
        
      
      bool answer=true;
      
      for(int i=0;i<n-1;i++){
         if(a[i]>a[i+1]){
             answer=false;
             break;
         }
          
      }
      
      if(answer) cout<<n<<endl;
      else cout<<1<<endl;
            
        }
        
        
        
        
        }
