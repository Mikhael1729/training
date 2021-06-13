#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

// [B. Decoding](http://codeforces.com/contest/746/problem/B)

int main() {
  int size;
  cin >> size;

  vector<char> letters(size);
  for (int i = 0; i < size; i++) {
    cin >> letters[i];
  }

  string decoded = "";
  int m = (size % 2 == 0 ? floor(size / 2) : size / 2);

  for (int i = 0; i < letters.size(); i++) {
    if (i == m)
      break;

    int index = letters.size() - 2 - i;
    char letter = letters[index];
    decoded += string(1, letter);
    letters.erase(letters.begin() + index);
  }

  for (int i = 0; i < letters.size(); i++) {
    decoded += letters[i];
  }

  cout << decoded;
}
