#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  freopen("cowsignal.in", "r",stdin);
  freopen("cowsignal.out", "w", stdout);
  
  int n, m, k;
  cin >> n >> m >> k;
  for(int l = 0; l < n; l++){
    string s; cin >> s;
    string ans = "";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < k; j++){
            ans += s[i];
        }
    }
    for(int i = 0; i < k; i++){
        cout << ans << "\n";
    }
    
  }
  return 0;
}