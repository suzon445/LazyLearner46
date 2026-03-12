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
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt[10] = {0};
    bool ok = true;
    for(int i = 0; i < n; i++){
        cnt[a[i]]++;
        //cout << cnt[a[i]] << endl;
        if(cnt[0] >= 3 and cnt[1] >= 1 and cnt[2] >= 2 and cnt[3]  >= 1 and cnt[5] >= 1){
            cout << i + 1 << endl;
            ok = false;
            break;
        }
    }
    if(ok){
        cout << 0 << endl;
    }
  }
  return 0;
}