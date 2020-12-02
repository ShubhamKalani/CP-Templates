struct DSU {
	vector<int> par ;
	vector<int> sz ;
	DSU(int n) {
		par.resize(n + 1) ;
		sz.resize(n + 1) ;
		iota(par.begin(), par.end(), 0);
		fill(sz.begin(), sz.end(), 0);
	}
	int getPar(int a) {
		if (par[a] == a) return a ;
		return par[a] = getPar(par[a]);
	}
	bool unite(int a , int b) {
		int x = getPar(par[a]);
		int y = getPar(par[b]);
		if (x != y) {
			par[x] = y ;
			sz[y] += sz[x];
			sz[x] = 0 ;
			return true ;
		}
		return false;
	}
};
