#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  int h;
  vector<int> H;
  for (int i = 0; i < n; i++) {
    cin >> h;
    H.push_back(h);
  }

  int size = H.size();
  int c = 1, max = 1;
  for (int i = 0; i < size; i++) {
    // Right.
    for (int j = i + 1; j < size; j++) {
      if (H[j] > H[i])
        break;

      int k = j - 1;
      if (k > i && H[j] > H[k])
        break;

      c += 1;
    }

    // Left.
    for (int j = i - 1; j >= 0; j--) {
      if (H[j] > H[i])
        break;

      int k = j + 1;
      if (k < i && H[j] > H[k])
        break;

      c += 1;
    }

    if (c > max)
      max = c;

    c = 1;
  }

  cout << max;
}
