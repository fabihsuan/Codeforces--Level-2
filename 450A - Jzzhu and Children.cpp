#include <iostream>
#include <queue>
using namespace std;

int main() {
  int n, m, ans;
  cin >> n >> m;
  int a;
  queue<int> x, y;
  for (int i = 1; i <= n; i++) {
    cin >> a;
    x.push(a);
    y.push(i);
  }
  while (!x.empty()) {
    if (x.front() <= m) {
      x.pop();
      y.pop();
    } else {
      x.push(x.front() - m);
      y.push(y.front());
      x.pop();
      y.pop();
    }
  }
  ans = y.back();
  cout << ans << endl;
  return 0;
}
