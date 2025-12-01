#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n; cin >> n;
    vector<int> ms;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        ms.push_back(x);
    }
    for(int liar = 0; liar <= n; liar++){
        int cur = 0;
        for(int i = 0; i < n; i++){
            if(liar < ms[i]){
                cur++;
            }
        }
        if(cur == liar){
            cout << cur << endl;
            return;
        }
    }
    cout << -1 << endl;

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