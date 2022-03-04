#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long MaxPairwiseProduct(const vector<int>& numbers) {
   // int max_product = 0;
    int n = numbers.size();

    //sort(numbers.begin(), numbers.end())
  //  return(long long int)(numbers[n-1]*(numbers[n-2]))
    int max_index1= -1;
    for(int i=0; i< n; i++)
    if(max_index1 == -1) || (numbers[i] > numbers[max_index1]))
    max_index1=i;

}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    cout << MaxPairwiseProduct(numbers,n); << "\n";
    return 0;
}
