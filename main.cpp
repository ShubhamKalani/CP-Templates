#include <bits/stdc++.h>

#define int long long
#define pb push_back
#define ff first
#define ss second
#define all(a) (a).begin(), (a).end()
#define forn(i, n) for(int i = 0 ; i < (int)n ; ++i)
#define fori(i, s, n) for(int i = (int)s ; i < (int)n ; ++i)
#define fore(i, s, n) for(int i = (int)s ; i >=(int)n ; --i)

using namespace std;

typedef vector<int> vi ;
typedef vector<vi> vvi ;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

template<typename A, typename B> ostream& operator<<(ostream &cerr, pair<A, B> const &p) {
	return cerr << "[" << p.first << ", " << p.second << "]";
}
template<typename A> ostream& operator<<(ostream &cerr, vector<A> const &v) {
	cerr << "[";
	for (auto it = v.begin() ; it != v.end() ; it++) {
		cerr << *it; if (it != prev(v.end())) cerr << ", ";
	}
	return cerr << "]";
}
template<class T> bool umin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool umax(T &a, T b) { return a < b ? (a = b, true) : false; }

int32_t main() {
	ios::sync_with_stdio(false); cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
#endif

#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
