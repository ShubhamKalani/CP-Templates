
namespace __number_theory__ {

/* Euclid GCd */
int gcd(int x, int y) {
  if (y == 0) return x;
  return gcd(y, x % y);
}

/*Check Prime*/
bool isprime(int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n % 2 == 0 || n % 3 == 0) return false;
  for (int i = 5; i * i <= n; i += 6)
    if (n % i == 0 || n % (i + 2) == 0) return false;

  return true;
}

/* Generating Primes (Sieve of Eratosthenes)*/
bool prime[15000105];
void sieve(int n) {
  prime[2] = 1;
  for (int i = 3; i <= n; i += 2) prime[i] = 1;
  for (int i = 3; i * i <= n; i += 2) {
    if (prime[i]) {
      for (int j = i * i; j <= n; j += (2 * i)) prime[j] = false;
    }
  }
}

vi primelist;
bool __primes_generated__ = 0;
void genprimes(int n) {
  __primes_generated__ = 1;
  sieve(n + 1);
  for (int i = 2; i <= n; ++i)
    if (prime[i]) primelist.pb(i);
}

/* Calculating prime factors */
vi factors(int n) {
  if (!__primes_generated__) {
    cerr << "Call genprimes"
         << "\n";
    exit(1);
  }
  vi facs;
  for (int i = 0; primelist[i] * primelist[i] <= n && primelist.size(); i++) {
    if (n % primelist[i] == 0) {
      while (n % primelist[i] == 0) {
        n /= primelist[i];
        facs.pb(primelist[i]);
      }
    }
  }
  if (n > 1) facs.pb(n);
  sort(all(facs));
  return facs;
}

/* Calculating Divisors */
vi getdivs(int n) {
  vi divs;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      divs.pb(i);
      if (i * i != n) divs.pb(n / i);
    }
  }
  // sort(all(divs));
  return divs;
}

/* Couting Divisors */
int count_div(int n) {
  int divcnt = 0;
  int cnt = 0;
  while (n % 2 == 0) {
    n /= 2;
    cnt++;
  }
  if (cnt != 0) divcnt = cnt + 1;
  for (int i = 3; i * i <= n; i += 2) {
    cnt = 0;
    if (n % i == 0) {
      while (n % i == 0) {
        n /= i;
        cnt++;
      }
      divcnt *= (cnt + 1);
    }
  }
  if (n > 1) divcnt *= 2;
  return divcnt;
}

/* Euler Totient */
int phi(int n) {
  double ans = (double)n;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      n /= i;
    }
    ans *= (1.0 - (1.0 / (double)i));
  }
  if (n > 1) ans *= (1.0 - (1.0 / (double)n));
  return (int)n;
}

}  // namespace __number_theory__
using namespace __number_theory__;