#include <iostream>
#include <vector>

using namespace std;

int main() {
  /*
   * `n + 1`              : Pylons total.
   * `h_0`                : Height of 0th Pylon.
   * `h_[i+1]`            : Height of i-th Pylon.
   * `k`                  : Current Pylon.
   * `E = h_k - h_[k+1]`  : Energy of the player (which always must be positive)
   */

  int n;
  cin >> n;

  vector<int> H(n + 1, 0);
  for(int i = 1; i < n + 1; i++)
    cin >> H[i];

  int s = 0, prevE = 0, jumpCost = 0;
  for(int i = 0; i < H.size() - 1; i++) {
    jumpCost = prevE + H[i] - H[i + 1];

    if (jumpCost < 0) {
      s += jumpCost * -1;
      prevE = 0;
    } else {
      prevE = jumpCost;
    }
  }

  cout << s;
  return 0;
}
