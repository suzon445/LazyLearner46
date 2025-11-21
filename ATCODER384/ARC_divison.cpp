#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, r;
  cin >> n >> r;
  vector<pair<int,int>> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i].first >> v[i].second;
  }

  for(int i = 0; i < n; i++){
    if(v[i].first == 1 and r >= 1600 and r <= 2799){
        r += v[i].second;
    }
    if(v[i].first == 2 and r >= 1200 and r <= 2399){
        r += v[i].second;
    }
  }
  cout << r << endl;
  return 0;
}