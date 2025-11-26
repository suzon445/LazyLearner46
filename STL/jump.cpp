#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--){
     int x;
     cin >> x;
     int i = 0;
     while(i * ( i + 1) < 2 * x){
      i++;
     }
     if(i * ( i + 1) / 2 == x + 1){
      i++;
     }
     cout << i << endl;
    
  }
  return 0;
}