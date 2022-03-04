#include <iostream>
using namespace std;

long long p(long long y) {
	long long a = 0, b = 1, c = a + b; 
	for (int i = 0; i < y*y; i++) {
		c = (a + b) % y; 
		a = b; 
		b = c; 
		if (a == 0 && b == 1)
			return i + 1; 
	}
}
int s(long long x, long long y) {
	long long remainder = x % p(y);

	long long first = 0;
	long long second = 1;

	long long res = remainder;

	for (int i = 1; i < remainder; i++) {
		res = (first + second) % y;
		first = second;
		second = res;
	}

	return res % y;
}
int main() {
	long long x, y; 
	cin >> x >> y; 
	cout << s(x, y);
}