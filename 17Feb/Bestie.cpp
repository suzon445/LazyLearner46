#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int a[n];
    int gc = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        gc = __gcd(gc, a[i]);
    }
    if(gc == 1){
        cout << 0 << endl;
    }
    else if(__gcd(gc, n) == 1){
      cout << 1 << endl;  
    }
    else if(__gcd(gc, n -1) == 1){
      cout << 2 << endl;
    }
    else cout << 3 << endl;
    
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}