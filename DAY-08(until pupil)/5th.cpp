#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    fast;
    int t = 1;
   // cin >> t; // Uncomment if multiple test cases
    while(t--) {
      int n; cin >> n;
      vector<ll> v(n + 1 , 0);
      map<int,int> fr;
      for(int i = 1; i <= n; i++){
        cin >> v[i];
        fr[v[i]]++;

      }
      vector<ll> pr(n + 1, 0);
      for(auto x : fr){
        pr[x.second] += x.second * x.first;
      }
      for(int i = 1; i <= n; i++){
        pr[i] += pr[i - 1];
      }
      
      int q;
      cin >> q;
      while(q--){
        int l, r; cin >> l >> r;
        cout << pr[r] - pr[l-1] << endl;
      }
    }
    return 0;
}