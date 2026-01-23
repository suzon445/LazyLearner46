#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

//check prime in O(n)
bool prime(int n){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0) cnt++;
    }
    if(cnt == 2){
        return true;
    }
    else return false;
}

//check prime in O(sqrt(n));
bool prime_sqrt(int n){
    int cnt = 0;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            cnt++;
            if(n / i != i) cnt++;
        }
    }
    if(cnt == 2){
        return true;
    }
    else return false;
}

//Sieve of eratosthenes

const int N = 1e6;
int sieve[N + 1];

void sieve_prime(){
    for(int i = 2; i <= N; i++){
        sieve[i] = 1;
    }
    for(int i = 2; i * i <= N; i++){
        if(sieve[i] == 0) continue;
        for(int j = i * i ; j <= N; j += i){
            sieve[j] = 0;
        }
    }
}

// smallest prime factors


int spf[N + 1];

void s_prime(){
    for(int i = 2; i <= N; i++){
        spf[i] = i;
    }
    for(int i = 2; i * i <= N; i++){
        if(spf[i] != i) continue;
        for(int j = i * i ; j <= N; j += i){
            if(spf[j] == j)
               spf[j] = i;
        }
    }
    int q; cin >> q;
    while(q--){
        int n; cin >> n;
        while(n != 1){
            cout << spf[n] << " ";
            n  /= spf[n];
        }
        cout << endl;
    }
}



int main() {
    fast;
    
    return 0;
}