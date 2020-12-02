int countDivisors(int n) {
	int divcnt = 1 ;
	int cnt = 0 ;
	while (n % 2 == 0) {
		n /= 2 ;
		cnt++;
	}
	if (cnt > 0) divcnt = cnt + 1;

	for (int i = 3 ; i * i <= n ; i += 2) {
		cnt = 0 ;
		if (n % i == 0) {
			while (n % i == 0) {
				n /= i ;
				cnt++;
			}
			divcnt *= (cnt + 1);
		}
	}
	if (n > 1)
		divcnt *= 2 ;

	return divcnt;
}