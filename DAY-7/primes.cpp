#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
const int S = 100000; 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    const int N = 100000000; 
 
    
    int nsqrt = sqrt(N);
    vector<bool> is_prime(nsqrt + 1, true);
    vector<int> primes;
 
    for (int i = 2; i <= nsqrt; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (ll j = 1LL * i * i; j <= nsqrt; j += i)
                is_prime[j] = false;
        }
    }
 
    
    vector<char> blck(S);
    ll count = 0;  
 
    for (int k = 0; 1LL * k * S <= N; k++) {
        int start = k * S;
        ll end = min(N, start + S - 1);
 
        fill(blck.begin(), blck.end(), true);
 
        for (int p : primes) {
            ll start_idx = (start + p - 1) / p;
            ll j = max<ll>(start_idx, p) * p - start;
 
            for (; j < end - start + 1; j += p)
                blck[j] = false;
        }
 
        if (k == 0) {
            blck[0] = blck[1] = false;
        }
 
        for (int i = 0; i <= end - start; i++) {
            if (blck[i]) {
                count++;
                if (count % 100 == 1) { 
                    cout << (start + i) << "\n";
                }
            }
        }
    }
 
    return 0;
}
 