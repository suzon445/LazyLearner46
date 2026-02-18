#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, d;
  cin >> n >> d;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  sort(a, a + n);
  reverse(a, a + n);
  int i = 0, j = n - 1, ans = 0;
  while(i <= j){
    int need = d / a[i];
    if(j - need >= i){
        ans++;
        j -= need;
    }
    i++;
  }
  cout << ans << endl;
  return 0;
}