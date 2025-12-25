#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a[3];
  for(int i = 0; i < 3; i++){
    cin >> a[i];
  }
  sort(a, a + 3);
  if(a[2] - a[0] >= 10){
    cout << "check again\n";
  }
  else cout << "final " <<  a[1] << endl;
  return 0;
}