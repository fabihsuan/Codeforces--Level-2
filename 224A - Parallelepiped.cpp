#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  vector<int> vec;
  vec.push_back(x);
  vec.push_back(y);
  vec.push_back(z);

  sort(vec.begin(), vec.end());
  int i = 0, j = 1, a, b, c;
  x = vec[i];
  y = vec[i + 1];
  z = vec[i + 2];
  bool find = false;
  while (find == false) {
    a = x / j;
    b = y / a;
    c = z / b;
    if (x % j == 0 && y % a == 0 && z % b == 0 && c == j) {
      find = true;
      cout << (a + b + c) * 4 << endl;
      return 0;
    } else {
      j++;
      find = false;
    }
  }
  return 0;
}
