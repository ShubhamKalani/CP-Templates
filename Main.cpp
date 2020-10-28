#include <bits/stdc++.h>

#define int long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define umap unordered_map
#define uset unordered_set
#define pqueue priority_queue
#define all(a) (a).begin(), (a).end()
#define len(a) (int)a.size()

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef map<int, int> mii;
typedef umap<int, int> umii;

const int mod = (int)1e9 + 7;
const int inf = (int)1e18;

template <class T>
bool umin(T& a, T b) {
  return a > b ? (a = b, true) : false;
}
template <class T>
bool umax(T& a, T b) {
  return a < b ? (a = b, true) : false;
}

string to_string(char c) { return string(1, c); }

string to_string(bool b) { return b ? "true" : "false"; }

string to_string(const char* s) { return string(s); }

string to_string(string s) { return s; }

string to_string(vector<bool> v) {
  string res;
  for (int i = 0; i < len(v); ++i) res += char('0' + v[i]);
  return res;
}

template <typename A, typename B>
string to_string(pair<A, B> p) {
  return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <class T>
string to_string(T v) {
  bool f = true;
  string res;
  for (auto& x : v) {
    if (!f) res += ' ';
    f = false;
    res += to_string(x);
  }
  return res;
}

template <class A>
void write(A x) {
  cout << to_string(x);
}

template <class H, class... T>
void write(const H& h, const T&... t) {
  write(h);
  write(t...);
}

void print() { write("\n"); }

template <class H, class... T>
void print(const H& h, const T&... t) {
  write(h);
  if (sizeof...(t)) write(' ');
  print(t...);
}

void debug_out() { cerr << "]" << endl; }

template <class H, class... T>
void debug_out(H h, T... t) {
  cerr << to_string(h);
  if (sizeof...(t)) cerr << ", ";
  debug_out(t...);
}

#ifndef ONLINE_JUDGE
#define debug(...)                                              \
  cerr << "(" << __LINE__ << ") : [" << #__VA_ARGS__ << "]: [", \
      debug_out(__VA_ARGS__)
#else
#define debug(...)
#endif

void solve(int t) {}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int test_cases = 1;
  // cin >> test_cases;
  for (int t = 1; t <= test_cases; ++t) {
    solve(t);
  }
  return 0;
}
