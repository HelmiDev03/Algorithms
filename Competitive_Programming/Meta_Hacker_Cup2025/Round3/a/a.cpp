/**
 * Pascal's Bathroom - Spanning Tree Solution
 * * Logic:
 * 1. Treat the grid as a graph.
 * 2. Build a Spanning Tree using DFS to turn the grid into a single connected structure.
 * 3. Traverse the tree (Post-Order) to group nodes into patches of size K.
 * 4. Color the patches cyclically (a, b, c...) to ensure visual clarity.
 */

#include <iostream>
#include <vector>
#include <set>

using namespace std;

struct Point {
    int r, c;
};

int N, K;

// Grid Directions: Up, Down, Left, Right
int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

// Global structures
vector<vector<Point>> tree_adj; // Adjacency list for the spanning tree
vector<bool> visited;           // Visited array for DFS
vector<vector<int>> grid_patch_id; // Stores which patch ID each cell belongs to
int patch_count = 0;

// Check if coordinate is inside the triangle
bool isValid(int r, int c) {
    return r >= 0 && r < N && c >= 0 && c <= r;
}

// 1. DFS to build Spanning Tree
// We prefer horizontal moves first to mimic the "lines" of the sample output
void buildSpanningTree(int r, int c) {
    visited[r * N + c] = true;
    
    // Custom order: Right, Down, Left, Up (Helps create cleaner shapes)
    int move_r[] = {0, 1, 0, -1};
    int move_c[] = {1, 0, -1, 0};

    for (int i = 0; i < 4; ++i) {
        int nr = r + move_r[i];
        int nc = c + move_c[i];
        
        if (isValid(nr, nc) && !visited[nr * N + nc]) {
            tree_adj[r * N + c].push_back({nr, nc});
            buildSpanningTree(nr, nc);
        }
    }
}

// 2. Post-Order Partitioning
// Returns leftover nodes from children that couldn't form a full patch
vector<Point> partitionTree(int r, int c) {
    vector<Point> current_remnants;
    
    // Gather remnants from all children
    for (const auto& child : tree_adj[r * N + c]) {
        vector<Point> child_remnants = partitionTree(child.r, child.c);
        current_remnants.insert(current_remnants.end(), child_remnants.begin(), child_remnants.end());
    }
    
    // Add current node to the pile
    current_remnants.push_back({r, c});
    
    // If we have >= K nodes, form a patch
    while (current_remnants.size() >= K) {
        // Take the first K nodes (deepest children)
        for (int i = 0; i < K; ++i) {
            Point p = current_remnants[i];
            grid_patch_id[p.r][p.c] = patch_count;
        }
        patch_count++;
        // Remove them from remnants
        current_remnants.erase(current_remnants.begin(), current_remnants.begin() + K);
    }
    
    return current_remnants;
}

void solve(int t) {
    cin >> N >> K;

    // Reset Memory
    tree_adj.assign(N * N, vector<Point>());
    visited.assign(N * N, false);
    grid_patch_id.assign(N, vector<int>(N, -1));
    patch_count = 0;

    // Step 1: Build Tree
    buildSpanningTree(0, 0);

    // Step 2: Partition
    vector<Point> leftovers = partitionTree(0, 0);
    
    // If nodes remain (the root patch usually < K), assign them
    if (!leftovers.empty()) {
        for (const auto& p : leftovers) {
            grid_patch_id[p.r][p.c] = patch_count;
        }
        patch_count++;
    }

    // Step 3: Coloring
    // We construct an adjacency graph for patches to ensure valid coloring
    vector<set<int>> patch_adj(patch_count);
    for (int r = 0; r < N; ++r) {
        for (int c = 0; c <= r; ++c) {
            int u = grid_patch_id[r][c];
            // Check neighbors
            for (int i = 0; i < 4; ++i) {
                int nr = r + dr[i];
                int nc = c + dc[i];
                if (isValid(nr, nc)) {
                    int v = grid_patch_id[nr][nc];
                    if (u != v) {
                        patch_adj[u].insert(v);
                        patch_adj[v].insert(u);
                    }
                }
            }
        }
    }

    vector<char> patch_color(patch_count);
    vector<bool> colored(patch_count, false);
    
    // To match Sample 3's style, we try to use a new letter for every patch
    // unless forced otherwise by adjacency.
    // Actually, simply cycling 'a'...'z' is usually safe and looks better.
    
    for (int i = 0; i < patch_count; ++i) {
        // Try to pick the preferred color: (i % 26)
        // If that conflicts, pick the first available valid color.
        
        int preferred = i % 26;
        bool preferred_valid = true;
        
        // Check if preferred is valid
        for (int neighbor : patch_adj[i]) {
            if (colored[neighbor] && (patch_color[neighbor] - 'a') == preferred) {
                preferred_valid = false;
                break;
            }
        }

        if (preferred_valid) {
            patch_color[i] = 'a' + preferred;
        } else {
            // Fallback: Greedy search for first valid color
            vector<bool> used(26, false);
            for (int neighbor : patch_adj[i]) {
                if (colored[neighbor]) {
                    used[patch_color[neighbor] - 'a'] = true;
                }
            }
            for (int c = 0; c < 26; ++c) {
                if (!used[c]) {
                    patch_color[i] = 'a' + c;
                    break;
                }
            }
        }
        colored[i] = true;
    }

    // Output
    cout << "Case #" << t << ": " << patch_count << endl;
    for (int r = 0; r < N; ++r) {
        for (int c = 0; c <= r; ++c) {
            cout << patch_color[grid_patch_id[r][c]];
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
         freopen("input.txt", "r", stdin);
    // output.txt will be created/overwritten
    freopen("output.txt", "w", stdout);
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        solve(i);
    }
    return 0;
}