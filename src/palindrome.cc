#include <bits/stdc++.h>

using namespace std;

/**
 * O(n)
 */
bool is_palindrome(string &s) {
  int n = static_cast<int>(s.size());
  // a b c -> 0
  // a b c d -> 0 1
  for (int i = 0; i < n / 2; i++) {
    if (s[i] != s[n - 1 - i])
      return false;
  }
  return true;
}
