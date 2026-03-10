#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int a, b, x;
    cin >> a >> b >> x;
    
    if(x % (a + b) < a){
        cout << "NO\n";
    }
    else cout << "YES\n";
    
  }
  return 0;
}