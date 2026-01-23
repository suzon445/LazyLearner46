#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    fast;
    int t = 1;
    // cin >> t; // Uncomment if multiple test cases
    while(t--) {
        int n; cin >> n;
        vector<int> a(n + 1, 0);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 1; i < n; i++){
            a[i] += a[i - 1];
        }
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j <= n; j++){
                int sum = a[j] - a[i];
                cout << sum << endl;
                int sq = sqrt(sum);
                if(sq * sq == sum){
                    cnt++;
                }
            }
        }
        cout << cnt << endl;

        
    }
    return 0;
}