//This is a rather easy question even though it is rated 1000. Just check if the sum all forces for each axis are zero. 
//If it is zero, print yes, otherwise no

#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;cin>>n;
   int a=0;int b=0;int c=0;
    int x,y,z;
   while(n--){
       cin>>x>>y>>z;
       a+=x;
       b+=y;
       c+=z;
   }
   if(a==0&&b==0&&c==0) cout<<"YES";
   else cout<<"NO";   
}
