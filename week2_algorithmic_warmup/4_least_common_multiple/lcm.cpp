#include <iostream>
using namespace std;

long long int gcd(long long int a, long long int b) {
	while (b) {
		long long int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}


long long int lcm(long long int a, long long int b) {
	return a / (long long int)(gcd(a, b))* b;
}

int main() {
	int a, b; 
	cin >> a >> b; 
	cout << lcm(a, b) << endl;
}