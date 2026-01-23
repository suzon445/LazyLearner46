#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  string s; cin >> s;
  int cnt = 1;
  int i = 1;
  while(s[i-1] == s[i] && i < n){
  	cnt++;
  	i++;
  }
  if(cnt == n){
  	cout << "NO" << endl;
  }
  else{
  	cout << "YES" << endl;
  	cout << s[i-1] << s[i] << endl;
  }
  
}