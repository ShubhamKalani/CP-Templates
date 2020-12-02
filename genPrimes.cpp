bool prime[150000105];

void sieve(int n) {
	prime[2] = true;
	for (int i = 3 ; i <= n ; i += 2)
		prime[i] = true;
	for (int i = 3 ; i * i <= n ; i += 2) {
		if (prime[i])
			for (int j = i * i ; j <= n ; j += (2 * i))
				prime[j] = false;
	}
}

vector<int> genPrimes(int n) {
	sieve(n + 1);
	vector<int> primeList;
	primeList.push_back(2);
	for (int i = 3 ; i <= n  ; i += 2)
		if (prime[i])
			primeList.push_back(i);
	return primeList;
}