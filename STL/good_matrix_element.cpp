#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  int a[n][n];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cin >> a[i][j];
    }
  }

  ll sum = 0;
  //diagonal
  for(int i = 0; i < n; i++){
    sum += a[i][i];
  }
  for(int i = n - 1, j = 0; j < n; i--, j++){
    sum += a[i][j];
  }
  int i = n / 2;
  for(int j = 0; j < n; j++){
    sum += a[i][j];
    sum += a[j][i];
  }
  cout << sum - 3 * a[i][i] << endl;
  return 0;
}