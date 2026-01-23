#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
const int N = 5e6 + 1;
int sieve[N];
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
        int l, r;
        cin >> l >> r;
        ll sum = 0;
        for(ll i = l; i <= r; i++){
            if(sieve[i]) sum += i;
        }
        cout << sum << endl;

    }
    return 0;
}