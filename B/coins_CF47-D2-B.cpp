#include <iostream>
#include <string>

using namespace std;

// [B. Coins](http://codeforces.com/contest/47/problem/B)

string str(char character) {
  return string(1, character);
}

int main() {
  // Request coins weight comparisons.
  string w1, w2, w3;
  cin >> w1;
  cin >> w2;
  cin >> w3;

  string order = "";
  if (w1[1] == '<') {
    order += str(w1[0]) + str(w1[2]);
  } else {
    order += str(w1[2]) + str(w1[0]);
  }

  if (w2[1] == '<') {
    if (w2[0] != order[0]) {
      order = str(w2[0]) + order;
    } else {
      order = str(order[0]) + str(w2[2]) + str(order[1]);
    }
  } else {
    if (w2[0] != order[0]) {
      order = str(order[0]) + str(w2[2]) + str(order[1]);
    } else {
      order = str(w2[2]) + order;
    }
  }

  int w31, w32;
  for (int i = 0; i < 3; i++) {
    char c = order[i];

    if (c == w3[0])
      w31 = i;
    if (c == w3[2])
      w32 = i;
  }

  if ((w3[1] == '<' && w31 < w32) || (w3[1] == '>' && w31 > w32)) {
    cout << order;
  } else {
    cout << "Imposible";
  }

  return 0;
}
