#include <iostream>
#include <vector>

using namespace std;

int subfunc(vector<int> weights, vector<int> values)
 {
    int mindex = 0;
    double max = 0;

    for (int i = 0; i < weights.size(); i++)
     {
        if (weights[i] != 0 && (double) values[i] / weights[i] > max) 
        {
            max = (double) values[i] / weights[i];
            mindex = i;
        }
    }
    return mindex;
}

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) 
{
    double value = 0.0;

    for (int i = 0; i < weights.size(); i++) 
    {
        if (capacity == 0) 
        return value;
        int count_val;
        count_val= subfunc(weights, values);
        int x;
        x= min(capacity, weights[count_val]);
        value += x * (double) values[count_val] / weights[count_val];
        weights[count_val] -= x;
        capacity -= x;
    }

    return value;
}

int main() {
  int n;
  int capacity;
  cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  cout.precision(10);
  cout << optimal_value << endl;
  return 0;
}
