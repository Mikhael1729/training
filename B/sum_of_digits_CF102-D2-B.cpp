#include <iostream>
#include <string>

using namespace std;

int E(string number, int size, int i, unsigned long long int sum, int times) {
  if (i == size) {
    number = to_string(sum);

    size = number.size();
    if (size == 1)
      return sum == 0 ? times : times + 1;

    return E(number, size, 0, 0, times + 1);
  }

  int a = (int)number[i] - 48;
  return E(number, size, i + 1, sum + a, times);
}

int main() {
  string number;
  cin >> number;

  int q = E(number, number.size(), 0, 0, 0);
  cout << q;

  return 0;
}
