#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int n, k; 
    cin >> n >> k;
    if(k == 0){
        for(int i = n; i >= 1; i--){
            cout << i <<' ';
        }
        cout << endl;
        continue;
    }
    cout << 1 <<' ';
    for(int i = (n - k + 1); i <= n; i++){
        cout << i <<' ';
    }
    for(int i = n - k; i >= 2; i--){
        cout << i <<' ';
    }
    cout << endl;
  }
  return 0;
}