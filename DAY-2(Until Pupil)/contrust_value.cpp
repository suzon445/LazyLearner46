#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    n = unique(all(a)) - a.begin();
    int ans = n;
    for(int i = 1; i + 1 < n; i++){
        if(a[i] > a[i - 1] and a[i] < a[i + 1]) ans--;
        if(a[i] < a[i - 1] and a[i] > a[i + 1]) ans--;
    }
    cout << ans << endl;
}

int main() {
    fast;
    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while(t--) {
        solve();
    }
    return 0;
}