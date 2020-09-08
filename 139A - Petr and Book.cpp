#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, a;
  cin >> n;
  vector<int> vec(7);
  int read = 0;
  int week = 0;
  bool end = false;

  for (int i = 1; i <= 7; i++) {
    cin >> a;
    vec[i] = a;
  }
  while (end == false) {
    for (int i = 1; i <= 7; i++) {
      read += vec[i];
      if (read >= n) {
        cout << i << endl;
        end = true;
        return 0;
      }
    }
    week += read;
    end = false;
  }
}
