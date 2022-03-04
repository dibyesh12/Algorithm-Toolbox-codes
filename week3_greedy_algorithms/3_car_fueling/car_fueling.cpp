#include <iostream>
#include <vector>

using namespace std;

int compute_min_refills(int dist, int tank, vector<int>& stops) {
	if (dist <= tank) return 0;
	int i = 0;
	int noOfStops = 0;
	int now = 0;
	int covered = 0;
	bool tf = false;

	stops.push_back(dist);

	while (covered < dist) {
		while (i < stops.size() and stops[i] - now <= tank) {
			i++;
			tf = true;
		}
		if (tf) {
			if (i == stops.size()) break;
			now = stops[i - 1];
			covered = now;
			noOfStops += 1;
		} else {
			return -1;
		}
		tf = false;
	}
	return noOfStops;
}

int main() {
	int d = 0;
	cin >> d;
	int m = 0;
	cin >> m;
	int n = 0;
	cin >> n;

	vector<int> stops(n);
	for (size_t i = 0; i < n; ++i) cin >> stops.at(i);

	cout << compute_min_refills(d, m, stops) << "\n";

	return 0;
}