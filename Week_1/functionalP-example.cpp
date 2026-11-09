#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  std::vector<int> z{24, 57, 98, 101, 49, 88, 28};

  auto is_odd = [](int y) {return y % 2 == 1;};

  z.erase(std::remove_if(z.begin(), z.end(), is_odd), z.end());

  for(const auto& y : z) {
    cout << y << " ";
  }
  cout << endl;

  return 0;
}
