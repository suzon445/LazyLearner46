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
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    set<int> s;
    for(int i = 1; i < 100; i += 2){
        s.insert(i * i);
    }
    
    int cnt = 0, sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(s.count(sum) == 1){
            cnt++;
        }
    }
    cout << cnt << endl;
  }
  return 0;
}