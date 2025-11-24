#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
int x;

int jump(int i, int pos){
  if(pos == x) return 1;
  if(pos > x) return 0;
  cout << pos << endl;
  return min(jump(i + 1, pos + i),jump(i + 1, pos - 1));

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--){
     cin >> x;
     cout << jump(1,0) << endl;
    
  }
  return 0;
}