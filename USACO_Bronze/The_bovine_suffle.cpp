#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  freopen("shuffle.in", "r", stdin);
  freopen("shuffle.out", "w", stdout);

  int n; cin >> n;
  vector<int> a(n + 1), id(n + 1);
  for(int i = 1; i <= n; i++){
    cin >> a[i];
  }
  for(int i = 1; i <= n; i++){
    cin >> id[i];
  }
  int suffle = 3;
  while(suffle--){
    vector<int> curr(n + 1, 0);
    for(int j = 1; j <= n; j++){
        curr[j] = id[a[j]];
    }
    id = curr;
  }
  
  for(int i = 1; i <= n; i++){
    cout << id[i] << '\n';
  }
  return 0;
}