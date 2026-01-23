#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
const int N = 1e7 + 1;
bool sieve[N];
int main() {
    fast;
    for(int i = 2; i <= N; i++){
        sieve[i] = 1;
    }
    for(int i = 2; i * i <= N; i++){
        if(sieve[i]){
            for(int j = i * i; j <= N; j += i){
               sieve[j] = 0;
          }
        }     
    }
    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while(t--) {
        int n;
        cin >> n;
        ll sum = 0;
        for(ll i = 2; i <= n; i++){
            if(sieve[i]) sum += i;
        }
        cout << sum << endl;

    }
    return 0;
}