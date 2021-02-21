#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a;
  cin >> b;

  int c = 0;
  while (a <= b) {
    // After one year.
    a *= 3;
    b *= 2;

    c += 1;
  }

  cout << c;

  return 0;
}
