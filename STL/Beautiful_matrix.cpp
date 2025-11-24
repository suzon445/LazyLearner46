#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  vector<vector<int>> v(5,vector<int> (5));
  pair<int,int> ind;
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
        cin >> v[i][j];
        if(v[i][j]) ind = {i,j};
    }
  }
  int step = max(abs(ind.first - 2), abs(ind.second - 2));
  int mn = min(abs(ind.first - 2), abs(ind.second - 2));
  cout <<((ind.first == 2 or ind.second == 2 ) ?  step : mn + step ) << endl;
  return 0;
}