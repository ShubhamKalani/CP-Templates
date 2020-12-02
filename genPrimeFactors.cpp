vector<int> genPrimeFactors(int n , bool  uniq = false) {
	vector<int> facs;
	while (n % 2 == 0) {
		n /= 2 ;
		facs.push_back(2);
	}
	for (int i = 3 ; i * i <= n ; i += 2) {
		if (n % i == 0) {
			while (n % i == 0) {
				n /= i ;
				facs.push_back(i);
			}
		}
	}
	if (n > 1)
		facs.push_back(n);

	if (uniq) {
		sort(facs.begin(), facs.end());
		facs.resize(distance(facs.begin() , unique(facs.begin(), facs.end())));
	}
	return facs;
}