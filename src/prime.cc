#include <vector>
using namespace std;

/**
 * The returned primes can contain `limit`.
 */
vector<int> eratosthenes(int limit) {
  vector<int> candidates(limit + 1, true);
  vector<int> res;
  for (int i = 2; i < limit + 1; i++) {
    if (candidates[i]) {
      res.push_back(i);
      for (int j = i; j < limit + 1; j += i) {
        candidates[j] = false;
      }
    }
  }
  return res;
}
