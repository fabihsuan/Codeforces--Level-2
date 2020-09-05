#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
  int n, m, a, b;
  cin >> n;
  vector<int> v(n + 1);
  ll left = 0;
  ll right = 0;
  for (int i = 0; i < n; i++) {
    cin >> a;

    v[a] = i + 1;
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> b;

    left += v[b];
    right += n - v[b] + 1;
  }
  cout << left << " " << right << endl;
  return 0;
}
