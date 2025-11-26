#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int n; 
    cin >> n;
    priority_queue<int> mx;
    for(int i = 0; i < n; i++){
      mx.push(i + 1);
    }
    vector<pair<int,int>> ans;
    for(int i = 0; i + 1 < n; i++){
      int f = mx.top();
      mx.pop();
      int s = mx.top();
      mx.pop();
      ans.push_back({f,s});
      mx.push((f + s + 1) / 2);
    }
    cout << mx.top() << endl;
    for(auto x : ans){
      cout << x.first <<' ' << x.second << endl;
    }
    cout << endl;

    
    
  }
  return 0;
}