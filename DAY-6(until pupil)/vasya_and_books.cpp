#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  vector<int> a(n),b(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n; i++){
    cin >> b[i];
  }
  set<int> st;
  int j = 0;
  for(int i = 0; i < n; i++){
    if(st.find(b[i]) != st.end()){
        cout << 0 << ' ';
    }
    else{
        int cnt = 1;
        while(a[j] != b[i]){
            cnt++;
            st.insert(a[j]);
            j++;
        }
        st.insert(a[j]);
        j++;
        cout << cnt << ' ';
    }
  }
  return 0;
}