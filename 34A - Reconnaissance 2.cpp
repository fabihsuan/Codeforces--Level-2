#include <array>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  array<int, 3> ans = {-1, -1, 1000};
  int diff;
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
    if (i == 0) continue;
    diff = abs(vec[i] - vec[i - 1]);
    if (diff < ans[2]) {
      ans[0] = i;
      ans[1] = i + 1;
      ans[2] = diff;
    }
  }
  diff = abs(vec[0] - vec[n - 1]);
  if (diff < ans[2]) {
    ans[0] = 1;
    ans[1] = n;
    ans[2] = diff;
  }
  cout << ans[0] << " " << ans[1] << endl;
  return 0;
}
