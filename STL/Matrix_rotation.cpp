#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int a, b, c , d;
    cin >> a >> b >> c >> d;
    int r1 = a - b;
    int r2 = c - d;
    int c1 = a - c;
    int c2 = b - d;
    if( ((r1 > 0 and r2 > 0) || (r1 < 0 and r2 < 0)) 
           and ((c1 > 0 and c2 > 0) || (c1 < 0 and c2 < 0) )){
            cout << "YES\n";
     }
     else cout << "NO\n";

  }
  return 0;
}