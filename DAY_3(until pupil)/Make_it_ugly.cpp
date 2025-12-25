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
    int cnt1 = 1, cnt2 = 1;
    int i = 1;
    while(a[i] == a[i-1] and i < n){
        cnt1++;
        i++;
    }
    int j = n - 2;
    while(a[j] == a[j + 1] and j >= 0){
        cnt2++;
        j--;
    }
    int cnt = max(cnt1,cnt2);
    if(cnt == n){
        cout << -1 << endl;
    }else cout << cnt << endl;
  }
  return 0;
}