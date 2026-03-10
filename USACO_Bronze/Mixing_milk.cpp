#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  freopen("mixmilk.in", "r", stdin);
  freopen("mixmilk.out" , "w", stdout);

  
  vector<pair<int,int>> b(3);
  for(int i = 0; i < 3; i++){
    cin >> b[i].first >> b[i].second;
  }

  for(int i = 0; i < 100; i++){
    int buk1 = i % 3;
    int buk2 = ( i + 1) % 3;

    int mn = min(b[buk1].second, b[buk2].first - b[buk2].second);

    b[buk1].second -= mn;
    b[buk2].second += mn;

  }
  for(auto x : b){
    cout << x.second << '\n';
  }
  return 0;
}