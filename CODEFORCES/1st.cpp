#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    fast;
    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        bool ok = false;
        for(int i = 0; i < n - 1; i++){
            if(a[i] == a[i + 1]) ok = true;
        }
        if(ok){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}