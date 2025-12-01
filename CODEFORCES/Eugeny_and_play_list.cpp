#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    fast;
    int t = 1;
   // cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> time(n);
        ll cnt = 0;
        for(int i = 0; i < n; i++){
            int a, b;
            cin >> a >> b;
            cnt += a * b;
            time[i] = cnt;
        }
        for(int i = 0; i < m; i++){
            int a; cin >> a;
            int it = lower_bound(time.begin(),time.end(),a) - time.begin();
            cout << it + 1 << endl;
        }
    }
    return 0;
}