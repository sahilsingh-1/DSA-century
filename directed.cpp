#include <bits/stdc++.h>
using namespace std;

int main() {
    int V = 5;
    vector<int> adj[V];

    // u -> v (directed)
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);

    for(int i = 0; i < V; i++) {
        cout << i << " -> ";
        for(int node : adj[i]) {
            cout << node << " ";
        }
        cout << endl;
    }
}
