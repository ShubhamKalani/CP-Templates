#include <bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

template <class t, class u>
ostream& operator<<(ostream& cerr, const pair<t, u>& p) {
    return cerr << "{" << p.first << ", " << p.second << "}" ;
}
template <class t> ostream& operator<<(ostream& cerr, const vector<t>& v) {
    cerr << "(" ;
    for (auto it = v.begin() ; it != v.end() ; ++it) {
        cerr << *it ;
        if (it != prev(v.end())) cerr << ", ";
    }
    return cerr << ")" ;
}

template <class T> bool umin(T& a, T b) { return a > b ? (a = b, true) : false; }
template <class T> bool umax(T& a, T b) { return a < b ? (a = b, true) : false; }

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
