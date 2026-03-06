//This is an easy question- good enough for someone who has solved a couple of two pointer problems. 
//The core idea is simple- difference between a pair should not exceed 1, there are multiple ways to implement this question, and I used two pointer variables because I was learning it.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    sort(a.begin(), a.end());

    int m; cin >> m;
    vector<int> b(m);
    for (auto& x : b) cin >> x;
    sort(b.begin(), b.end());

    int ans = 0;
    int l = 0;

    for (int r = 0; r < n; r++) {
        while (l < m) {
            if (abs(a[r] - b[l]) <= 1) {
                ans++;
               l++;
               break;
               
            }
           else if(a[r]>b[l]) l++;
            else {
                break;
            }
        }
    }
    cout << ans;
    return 0;
}