#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

const int N = 1e6;

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
    
    //cout << spf[5] << endl;
}


int main() {
    fast;
    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while(t--) {
        int n; cin >> n;
        vector<int> fr(n + 1, 0);
        s_prime();
        //cout << spf[n] << endl;
        while(n != 1){
            int i = spf[n];
            fr[i]++;
            //cout << fr[i] << endl;
            n = n / i;
        }
        cout << 2 << "^" << fr[2];
        for(int i = 3; i <= n; i++){
            if(fr[i] > 0){
                cout << "*";
                cout << i << "^" << fr[i];
            }
        }
        cout << endl;
    }
    return 0;
}