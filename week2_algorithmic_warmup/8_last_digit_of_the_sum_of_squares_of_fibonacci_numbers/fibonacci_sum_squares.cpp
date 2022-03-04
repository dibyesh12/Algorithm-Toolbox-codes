#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>


using namespace std;

long long int p(long long int m) {
	long long int a = 0, b = 1, c = a + b;
	for (int i = 0; i < m*m; i++) {
		c = (a + b) % m;
		a = b;
		b = c;
		if (a == 0 && b == 1)
			return i + 1;
	}
}
int s(long long int n, long long int m) {
	long long remainder = n % p(m);

	long long one = 0; long long two = 1;

	long long res = remainder;

	for (int i = 1; i < remainder; i++) {
		res = (one + two) % m;
		one = two;
		two = res;
	}

	return res % m;
}


int main() {
	long long int n; 
	cin >> n;
	cout << (s(n + 1,10)*s(n,10)) % 10 << endl;
}