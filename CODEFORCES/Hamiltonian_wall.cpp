#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n; cin >> n;
    string s[2];
    cin >> s[0] >> s[1];

    for(int t = 0; t < 2; t++){
        int x = t;
        int ok = 1;
        for(int i = 0; i < n; i++){
            if(s[x][i] != 'B') ok = 0;
            if(s[!x][i] == 'B') x ^= 1; // switch row
        }
        if(ok){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
void dp_sol(){
    int n; cin >> n;
    vector<string> a(2);
    cin >> a[0] >> a[1];

    vector<vector<int>> dp(2,vector<int> (n,0));
    if(a[0][0] == 'B') 
        dp[0][0] = 1;
    if(a[1][0] == 'B') 
        dp[1][0] = 1;
    for(int i = 1; i < n; i++){
        if(a[0][i] == 'B' and a[1][i] == 'B'){
            dp[0][i] = dp[1][i - 1];
            dp[1][i] = dp[0][i - 1];
        }
        else if(a[0][i] == 'B') dp[0][i] = dp[0][i-1];
        else dp[1][i] = dp[1][i-1];
    }
    cout << ((dp[0].back() || dp[1].back()) ? "YES\n" : "NO\n" );
}

int main() {
    fast;
    int t = 1;
     cin >> t; // Uncomment if multiple test cases
    while(t--) {
        //solve();
        dp_sol();
    }
    return 0;
}