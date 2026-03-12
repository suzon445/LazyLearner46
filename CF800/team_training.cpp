#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, x; 
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    reverse(a, a + n);
    int ans = 0;
    for(int i = 0, cnt = 1; i < n; i++, cnt++){
        if(cnt * a[i] >= x){
            ans++;
            cnt = 0;
        }
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