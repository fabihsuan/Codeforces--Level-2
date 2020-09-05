#include <iostream>
using namespace std;

int main() {
  int n, a;
  cin >> n;
  int x = 0;
  for (int i = 0; i < n; i++) {
    cin >> a;
    x += a;
  }
  x = x - 1;
  int count = 0;
  for (int i = 1; i <= 5; i++) {
    if (((x + i) % (n + 1)) != 0) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
