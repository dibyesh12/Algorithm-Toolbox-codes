#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

long long max_dot_product(vector<int> a, vector<int> b) {
    sort(begin(a), end(a));
    sort(begin(b), end(b));
    long long r = 0;
    for (int i = 0; i < a.size(); i++) {
        r =r+ (long long) a[i] * b[i];
    }
    return r;
}

int main() {
  size_t n;
  cin >> n;
  vector<int> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    cin >> b[i];
  }
  cout << max_dot_product(a, b) << endl;
}
