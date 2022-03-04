#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool compare(string& a, string& b)
{
	return(b + a < a + b);
}

string largestNumber(vector<string> Nums, int n)
{
    sort(Nums.begin(),Nums.end(),compare); 
    stringstream s; 
    for (size_t i = 0; i < n; i++) 
    {
      s << Nums[i]; 
    }
    return s.str(); 
}

int main() 
{
	int n;
	cin >> n;
	vector<string> Nums(n);
	for (size_t i = 0; i < n; i++) 
  {
		cin >> Nums[i];
	}
	cout << largestNumber(Nums, n) << endl;
}