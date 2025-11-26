#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt = 0;
    int i = 0, j = 0;
    while(a[i] == 0 and i < n) {
        cnt++;
        i++;
    }
    if(i == n){
        cout << 0 << endl;
        return;
    }
    j = i;
    while(a[j] > 0 and j < n) {
        cnt++;
        j++;
    }
    //cout << i + j << endl;
    int k = j;
    while(a[k] == 0 and k < n) {
        cnt++;
        k++;
    }
    if(cnt == n){
        cout << 1 << endl;
    }
    else cout << 2 << endl;
    
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}