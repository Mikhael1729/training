#include <iostream>
#include <string>

using namespace std;

int main() {
  string number;
  cin >> number;

  int sum, count = 0, size = number.size();
  while(size > 1) {
    sum = 0;

    for (int i = 0; i < size; i++)
      sum += number[i] - '0';

    number = to_string(sum);
    size = number.size();
    count++;
  }

  cout << count;

  return 0;
}
