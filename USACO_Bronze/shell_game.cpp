#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("shell.in", "r", stdin);
  freopen("shell.out" , "w", stdout);

  
  
  int n; cin >> n;
  vector<int> shell(3);
  for(int i = 0; i < 3; i++){
    shell[i] = i;
  }
  vector<int> cnt(3);
  for(int i = 0; i < n; i++){
    int a, b, g;
    cin >> a >> b >> g;
    a--, b--, g--;

    swap(shell[a], shell[b]);
    cnt[shell[g]]++;
  }
  cout << max({cnt[0], cnt[1], cnt[2]}) << "\n";
  return 0;
}