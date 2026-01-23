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
        int n;
        cin >> n;
        int a[3];
        for(int i  = 0; i < 3; i++){
            cin >> a[i];
        }
        map<int,int> fr;
        for(auto p : a){
            for(int i = p; i <= n; i+= p){
              fr[i]++;
            }
        }
        int cnt = 0;
        for(auto x : fr){
            if(x.second == 1) cnt++;
        }
        cout << cnt << endl;
        
    }
    return 0;
}