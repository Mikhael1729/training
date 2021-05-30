#include <iostream>
#include <string>
#include <vector>

using namespace std;

// [B. Effective Approach](http://codeforces.com/contest/227/problem/B)
int searchLinearly(int array[], int size, int target, bool fromFirst) {
  int i = fromFirst ? 0 : size - 1;
  int step = fromFirst ? 1 : -1;

  while (i < size) {
    int element = array[i];
    if (element == target) {
      break;
    }

    i += step;
  }

  if (fromFirst == true) {
    return i + 1;
  } else {
    return size - i;
  }
}

int main() {
  // INPUT:
  // 1: array size `n`
  // 2: array items `a`
  // 3: queries quantity `m`
  // 4: search queries `b`
  //
  // OUTPUT:
  // 1: comparisons of Vasya's approach `a`, .. of Petya's approach `b`
  // 
  // SOLUTION:
  int n;
  cin >> n;

  int items[n];
  for (int i = 0; i < n; i++) {
    cin >> items[i];
  }

  int m;
  cin >> m;

  int query;
  int a = 0, b = 0;
  for (int i = 0; i < m; i++) {
    cin >> query;

    int aSteps = searchLinearly(items, n, query, true);
    int bSteps = searchLinearly(items, n, query, false);

    a += aSteps;
    b += bSteps;
  }

  cout << a << " " << b;

  return 0;
}
