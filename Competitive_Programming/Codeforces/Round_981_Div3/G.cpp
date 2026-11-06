#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> tree;
vector<int> depth;

void dfs(int node, int parent, int d) {
    depth[node] = d;
    for (int neighbor : tree[node]) {
        if (neighbor != parent) {
            dfs(neighbor, node, d + 1);
        }
    }
}

int maxDepth(int start, int stamina) {
    // Calculate the maximum depth reachable within the given stamina
    return min(depth[start] + stamina, (int)depth.size() - 1);
}

void execute_case() {
    int n;
    cin >> n;

    tree.assign(n + 1, vector<int>());
    depth.resize(n + 1);

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    // Start DFS from root node 1
    dfs(1, -1, 0);

    int q;
    cin >> q;
    while (q--) {
        int vi, ki;
        cin >> vi >> ki;
        cout << maxDepth(vi, ki) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        execute_case();
    }

    return 0;
}
