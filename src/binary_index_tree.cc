#include <bits/stdc++.h>
using namespace std;

class BinaryIndexTree final {
public:
  vector<int> bit;
  BinaryIndexTree(int max_value) : bit(max_value + 1){};

  int sum(int i) {
    int res = 0;
    while (i > 0) {
      res += bit[i];
      i -= i & -i;
    }
    return res;
  }
  void add(int i, int v) {
    int max_value = get_max_value();
    while (i <= max_value) {
      bit[i] += v;
      i += i & -i;
    }
  }
  int get_max_value() { return bit.size() - 1; }
};

int count_inversion_number(vector<int> &v, int max_value) {
  BinaryIndexTree bit(max_value);

  int n = v.size();
  int res = 0;
  for (int i = 0ll; i < n; i++) {
    res += i - bit.sum(v[i]);
    bit.add(v[i], 1);
  }
  return res;
}
