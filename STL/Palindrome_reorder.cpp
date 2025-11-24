#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  string s;
  cin >> s;
  int n = s.size();
  map<char, int> mp;
  for(int i = 0; i < n; i++){
    mp[s[i]]++;
  }
  int cnt = 0;
  char ch ;
  int f = 0;
  for(auto x : mp){
    if(x.second % 2 == 1){
        cnt++;
        ch = x.first;
        f = x.second;
    }
  }
  if(cnt > 1){
    cout << "NO SOLUTION\n";
    return 0;
  }
  string ans="";
  for(auto x: mp){
    if(x.second % 2 == 0){
        int i = x.second / 2;
        for(int j = 0; j < i; j++){
            ans.push_back(x.first);
        }
    } 
  }
  //string copy = ans;
  cout << ans;
  for(int i = 0; i < f; i++){
    cout << ch;
  }
  reverse(ans.begin(),ans.end());
  cout << ans << endl;

  
  

  return 0;
}