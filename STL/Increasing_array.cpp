#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n; 
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  ll ans = 0;
  for(int i = 0; i + 1 < n; i++){
    if(a[i] > a[i + 1]){
        ans += (a[i] - a[i + 1]);
        a[i + 1] = a[i];
    }
  }
  cout << ans << endl;
  return 0;
}