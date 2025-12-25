#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  string s; cin >> s;
  string cur = "";
  int cnt = 0;
  for(int i = 0; i < n; i++){
    cur += s[i];
    int sz = cur.size();
    string sub = s.substr(i + 1, sz);
    if(sub == cur) cnt = max(cnt, sz);
  }
  if(cnt == 0) cout << n << endl;
  else cout << n - cnt + 1 << endl;
  return 0;
}