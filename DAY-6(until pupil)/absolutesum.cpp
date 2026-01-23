#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == - 1 and i > 0) v[i] = v[i-1];
    }
    
    int val = 0;
    for(int i = 1; i < n; i++){
        val += (v[i] - v[i-1]);
    }
    cout << abs(val) << endl;
    for(auto x : v)
      cout << x <<' ';
      cout << endl;

  }
  return 0;
}