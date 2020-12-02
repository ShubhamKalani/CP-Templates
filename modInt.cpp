const int mod = (int)1e9 + 7 ;

int power(int a , int b) {
	int res = 1  ;
	while (b != 0) {
		if (b & 1) {
			res = ((res % mod) * (a % mod)) % mod ;
		}
		b = b >> 1 ;
		a = ((a % mod) * (a % mod)) % mod;
	}
	return res % mod;
}
int inv(int x , int p) {
	return power(x , p - 2) % mod;
}
int add(int a , int b) {
	return ((a % mod) + (b % mod)) % mod;
}
int sub(int a , int b) {
	return ((a % mod) - (b % mod) + mod) % mod;
}
int mul(int a , int b) {
	return ((a % mod) * (b % mod)) % mod;
}
int div(int a , int b) {
	return  ((a % mod) * (inv(b , mod) % mod)) % mod ;
}
