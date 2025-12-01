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
        int n, a, b;
        cin >> n >> a >> b;
        int ver = n / a;
        int req = 4 / ver;
        int rem = n % a;
        if(rem >= b){
            cout << req << endl;
        }
        else{
            int top = n / b;
            req += 2 / top;
       
            cout << req << endl;
        }
    }
    return 0;
}