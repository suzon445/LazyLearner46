#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  freopen("speeding.in", "r" , stdin);
  freopen("speeding.out", "w", stdout);
  
  int n, m; cin >> n >> m;
  int limit[101] = {0};
  int pos = 0;
  for(int i = 0; i < n; i++){
    int a, b;
    cin >> a >> b;
    for(int i = pos + 1; i <= pos + a; i++){
        limit[i] = b;
    }
    pos += a;
  }
  int speed[101] = {0};
  pos = 0;
  for(int i = 0; i < m; i++){
    int a, b;
    cin >> a >> b;
    for(int i = pos + 1; i <= pos + a; i++){
        speed[i] = b;
    }
    pos += a;
  }
  
  int ans = 0;
  for(int i = 1; i <= 100; i++){
    ans = max(ans, speed[i] - limit[i]);
  }
  cout << ans << endl;

  return 0;
}