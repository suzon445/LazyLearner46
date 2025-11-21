#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  char a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;

  for(int i = 0; i < n; i++){
    if(s[i] == a) continue;
    s[i] = b;
  }
  cout << s << endl;
  return 0;
}