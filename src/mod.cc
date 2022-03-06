template <long long prime> class Mod final {
public:
  long long raw;
  Mod(long long raw) : raw(raw){};

  Mod<prime> operator+(Mod<prime> &other) const {
    return (raw + other.raw) % prime;
  }
  Mod<prime> operator*(Mod<prime> &other) const {
    return (raw * other.raw) % prime;
  }
  Mod<prime> operator*(long long other) const { return (raw * other) % prime; }
  Mod<prime> &operator+=(const Mod<prime> &other) {
    raw += other.raw;
    raw %= prime;
    return *this;
  }
};

using Mod998244353 = Mod<998244353ll>;
