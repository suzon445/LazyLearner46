#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--){
    string s; cin >> s;
    int n = s.size();
    int i = n - 1;
    while(s[i] == '0')i--;
    while(s[i] >= 49 and s[i] <= 57) i--;
    for(int j = 0; j <= i; j++){
        cout << s[j];
    }
    cout << endl;
  }
  return 0;
}