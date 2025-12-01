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
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            a[i]--;
        }
        vector<vector<int>> adj(n);
        for(int i = 0; i < m; i++){
            int u, v;
            cin >> u >> v;
            u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> ans(k, 0);
        vector<int> dist(n, -1);
        dist[0] = 0;
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int u = q.front();
            q.pop();
            ans[a[u]] = max(ans[a[u]],dist[u]);
            for(auto v : adj[u]){
                if(dist[v] == -1){
                    q.push(v);
                    dist[v] = dist[u] + 1;
                }
            }
        }
        for(int i = 0; i < k; i++){
            cout << ans[i] <<" \n"[i + 1 == k];
        }
    }
    return 0;
}