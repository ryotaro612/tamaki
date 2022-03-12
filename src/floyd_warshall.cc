#include <vector>
using namespace std;
/**
 * nはノードの数
 * node1_v, node2_vは各辺の片方の頂点のベクトル(0オリジン)
 */
vector<vector<long long>> floyd_warshall(int n, vector<int> &node1_v,
                                         vector<int> &node2_v,
                                         vector<long long> &costs,
                                         long long inf = 1ll << 61) {
  vector<vector<long long>> d(n, vector<long long>(n, inf));
  for (int i = 0; i < n; i++)
    d[i][i] = 0ll;
  int m = node1_v.size();
  for (int i = 0; i < m; i++) {
    d[node1_v[i]][node2_v[i]] = d[node2_v[i]][node1_v[i]] = costs[i];
  }
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
  return d;
};
