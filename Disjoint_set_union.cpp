struct dsu {
  vi par;
  vi sz;
  dsu(int n) {
    par.resize(n + 1);
    sz.resize(n + 1);
    iota(all(par), 0);
    fill(all(sz), 0);
  }
  int getPar(int a) {
    if (a == par[a]) return a;
    return par[a] = getPar(par[a]);
  }
  bool union(int a, int b) {
    int x = getPar(a);
    int y = getPar(b);
    if (x != y) {
      par[x] = y;
      sz[y] += sz[x];
      sz[x] = 0;
      return true;
    }
    return false;
  }
};