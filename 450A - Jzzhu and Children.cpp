//first version
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
//second version
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m, a;
  cin >> n >> m;
  vector<int> v;
  for (int i = 1; i <= n; i++) {
    cin >> a;
    v.push_back(a);
  }
  int max1 = 0, max2, x, locate;
  for (int i = 0; i < n; i++) {
    x = v[i] / m;

    if (v[i] % m != 0) {
      max2 = x + 1;
      if (max2 >= max1) {
        max1 = max2;
        locate = i;
      }
    } else if (v[i] % m == 0) {
      max2 = x;
      if (max2 >= max1) {
        max1 = max2;
        locate = i;
      }
    }
  }
  cout << locate + 1 << endl;
  return 0;
}

