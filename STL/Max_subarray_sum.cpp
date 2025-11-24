#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;
  vector<ll> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  ll sum = INT_MIN, cur = INT_MIN;
  for(int i = 0; i < n; i++){
    cur = max(v[i],cur + v[i]);
    sum = max(sum,cur);
  }
  cout << sum << endl;
  return 0;
}