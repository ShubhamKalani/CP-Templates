
namespace Number_Theory {

bool isprime(int n) {
	if (n <= 1) return false;
	if (n <= 3) return true ;
	if (n % 2 == 0 && n % 3 == 0) return false ;
	for (int i = 5 ; i * i <= n ; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	}
	return true ;
}

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

vector<int> primelist;

vector<int> genprimes(int n) {
	sieve(n + 1);
	primelist.push_back(2);
	for (int i = 3 ; i <= n  ; i += 2)
		if (prime[i])
			primelist.push_back(i);
	return primelist;
}

vector<int> facs ;
vector<int> factors(int n , bool  uniq = false) {
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

	sort(facs.begin(), facs.end());
	if (uniq) {

	}
	return facs;
}

int count_divisors(int n , bool  uniq = false) {
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

vector<int> divisors(int n) {
	vector<int> divs ;
	for (int i = 1; i * i <= n ; ++i) {
		if (n % i == 0) {
			divs.push_back(i);
			if (i * i != n) divs.push_back(n / i);
		}
	}
	return divs;
}

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

}
using  namespace Number_Theory;
