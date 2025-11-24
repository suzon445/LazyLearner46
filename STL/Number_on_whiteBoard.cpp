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
        a[i] = i + 1;
    }

    cout << 2 << endl;
    int i = n - 1;
    while(i > 0){
        cout << a[i] << ' ' << a[i - 1] << endl;
        a[i - 1] = round((a[i] + a[i - 1]) / 2);
        i--;
    }
    
    
  }
  return 0;
}