#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        s.insert(x);
    }
    vector<int> a{s.begin(), s.end()};
    int ans = 0, cnt = 0;
    for(int i = 0; i < (int) a.size(); i++){
        if(i == 0 || a[i] != a[i - 1] + 1){
            cnt = 0;
        }
        cnt++;
        ans = max(ans, cnt);
    }
    cout << ans << endl;

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