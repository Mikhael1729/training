#include <iostream>

using namespace std;

// CF677-D2-A
// Vanya and Fence
int main() {
  int q;
  cin >> q;

  int h;
  cin >> h;

  int c = 0;
  for (int i = 0; i < q; i++) {
    int a;
    cin >> a;

    if (a <= h)
      c += 1;
    else
      c += 2;
  }

  cout << c;
}
