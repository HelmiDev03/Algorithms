#include <bits/stdc++.h>

using namespace std;

long long solve() {
    int N, K, M;
    cin >> N >> K >> M;

    vector<vector<pair<int, int>>> routes_at_court(N + 1);
    vector<vector<int>> routes(M);

    for (int i = 0; i < M; ++i) {
        int L;
        cin >> L;
        routes[i].resize(L);
        for (int j = 0; j < L; ++j) {
            cin >> routes[i][j];
            routes_at_court[routes[i][j]].push_back({i, j});
        }
    }

    vector<long long> D(N + 1, -1);
    queue<int> q;

    D[1] = 0;
    q.push(1);

    vector<int> route_process_ptr(M, 0);
    long long total_sum = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        long long current_dist = D[u];

        for (auto& start_point : routes_at_court[u]) {
            int route_idx