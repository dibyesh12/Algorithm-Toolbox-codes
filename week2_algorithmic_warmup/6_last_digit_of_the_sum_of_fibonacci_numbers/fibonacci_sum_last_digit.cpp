#include <iostream>
using namespace std;
int ld(long long n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous % 10;
        previous = current % 10;
        current = tmp_previous + current % 10;
    }
    return current % 10;
}

int fsum(long long n) {
    int new_n = (n + 2) % 60;
    int new_last = ld(new_n);
    if (new_last == 0) {
        return 9;
    } else {
        return new_last - 1;
    }
}

int main() {
    long long n = 0;
    cin >> n;
    cout << fsum(n);
}