#include <bits/stdc++.h>
using namespace std;

void bfs(int V, vector<int> adj[]) {
    vector<bool> vis(V, false);
    queue<int> q;

    q.push(0);
    vis[0] = true;

    while(!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for(int neigh : adj[node]) {
            if(!vis[neigh]) {
                vis[neigh] = true;
                q.push(neigh);
            }
        }
    }
}

int main() {
    int V = 5;
    vector<int> adj[V];

    // add edges
    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[0].push_back(2);
    adj[2].push_back(0);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[2].push_back(4);
    adj[4].push_back(2);

    bfs(V, adj);

    return 0;
}
