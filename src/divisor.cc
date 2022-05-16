#include <vector>
using namespace std;

template <typename T> vector<T> get_divisors(T n) {
  vector<T> res;
  for (T i = 1ll; i * i <= n; i++) {
    if (n % i == 0ll) {
      res.push_back(i);
      if (i != n / i)
        res.push_back(n / i);
    }
  }
  sort(res.begin(), res.end());
  return res;
}
