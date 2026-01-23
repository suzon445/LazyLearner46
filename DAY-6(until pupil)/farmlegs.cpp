#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    if(n % 2 == 1){
        cout << 0 << endl;
        continue;
    }
    cout << n / 4 + 1 << endl;
  }
  return 0;
}