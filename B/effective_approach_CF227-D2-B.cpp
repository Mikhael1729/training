#include <iostream>
#include <string>
#include <vector>

using namespace std;

// [B. Effective Approach](http://codeforces.com/contest/227/problem/B)

int main() {
  // INPUT:
  // 1: array size `n`
  // 2: array items `a`
  // 3: queries quantity `m`
  // 4: search queries `b`
  //
  // OUTPUT:
  // 1: comparisons of Vasya's approach `a`, .. of Petya's approach `b`

  int n;
  cin >> n;

  int items[n];
  for (int i = 0; i < n; i++)
    cin >> items[i];

  int m;
  cin >> m;

  int query;
  int a = 0, b = 0;
  for (int i = 0; i < m; i++) {
    cin >> query;

    for (int j = 0; j < n; j++) {
      int element = items[j];
      if (element == query) {
        a += j + 1;
        b += n - j;
        break;
      }
    }
  }

  cout << a << " " << b;

  return 0;
}
