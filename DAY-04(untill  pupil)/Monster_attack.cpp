#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    vector<ll> monster(n);
    for(int i = 0; i < n; i++){
        cin >> monster[i];
    }
    vector<int> index(n);
    for(int i = 0; i < n; i++){
        cin >> index[i];
    }
    vector<ll> pos(n + 1, 0);
    for(int i = 1; i <= n; i++){
        pos[abs(index[i-1])] += monster[i-1];
    }
    ll bullet = 0;
    bool ok = true;
    for(int i = 1; i <= n; i++){
       bullet += (k-pos[i]);
       ok &= (bullet >= 0);
    }
    if(ok)cout << "YES\n";
    else cout << "NO\n";
    
  }
  return 0;
}