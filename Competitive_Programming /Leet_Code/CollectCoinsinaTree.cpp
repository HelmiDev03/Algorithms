class Solution {
 public:
  int collectTheCoins(vector<int>& coins, vector<vector<int>>& edges) {
    const int n = coins.size();
    vector<unordered_set<int>> tree(n);
    queue<int> leavesToBeRemoved;

    for (const vector<int>& edge : edges) {
      const int u = edge[0];
      const int v = edge[1];
      tree[u].insert(v);
      tree[v].insert(u);
    }

    for (int i = 0; i < n; ++i) {
      int u = i;

      while (tree[u].size() == 1 && coins[u] == 0) {
        const int v = *tree[u].begin();
        tree[u].clear();
        tree[v].erase(u);
        u = v;  
      }
     
      if (tree[u].size() == 1)
        leavesToBeRemoved.push(u);
    }

    for (int i = 0; i < 2; ++i)
      for (int sz = leavesToBeRemoved.size(); sz > 0; --sz) {
        const int u = leavesToBeRemoved.front();
        leavesToBeRemoved.pop();
        if (!tree[u].empty()) {
          const int v = *tree[u].begin();
          tree[u].clear();
          tree[v].erase(u);
          if (tree[v].size() == 1)
            leavesToBeRemoved.push(v);
        }
      }

    return accumulate(begin(tree), end(tree), 0,
                      [](int subtotal, const unordered_set<int>& children) {
      return subtotal + children.size();
    });
  }
};
