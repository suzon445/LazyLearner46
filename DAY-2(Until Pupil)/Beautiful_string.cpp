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
        string s; cin >> s;
        vector<int> one;
        for(int i = 0; i < n; i++){
            if(s[i] - '0' == 1){
                one.push_back(i + 1);
            }
        }
        cout << one.size() << endl;
        for(int i = 0; i < (int)one.size(); i++){
            cout << one[i] <<' ';
        }
        cout << endl;
    }
    return 0;
}