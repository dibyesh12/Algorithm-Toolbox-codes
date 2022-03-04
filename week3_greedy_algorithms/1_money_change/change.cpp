#include <iostream>

int get_change(int m) {
  int count;
  int arr[]={10,5,1};
  for(int i=0;m>0;i++){
 count=count+m/arr[i];
  m=m%arr[i];
  }
  return count;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
