int phi(int n) {
	long double ans =  (long double)n ;
	for (int i = 2 ; i * i <= n ; ++i) {
		if (n % i == 0) {
			while (n % i == 0) {
				n /= i;
			}
			ans *= (1.0 - (1.0 / (long double)i));
		}
	}
	if (n > 1) ans *= (1.0 - (1.0 / (long double)n));
	return (int)ans;

}