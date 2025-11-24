#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int a, b;
    cin >> a >> b;
    ll sum = a + b;
    if(sum % 3 != 0){
        cout << "NO\n";
    }
    else{
        int mx = max(a,b);
        int mn = min(a,b);
        if(mn >= mx / 2){
            cout << "YES\n";
        }
        else cout << "NO\n"; 
    }
  }
  return 0;
}