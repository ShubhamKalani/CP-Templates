int power(int a , int b) {
	int res = 1 ;
	while (b != 0) {
		if (b & 1) res *= a ;

		b = b >> 1 ;
		a *= a ;
	}
	return res ;
}