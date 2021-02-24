#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

/*
 * `m` containers -> `n:[a_i]` Matchboxes -> `b_i` matches
 *
 * - `n`: Matchboxes maximum of burglar's rucksack
 * - `m`: The quantity of containers.
 * - `a_i`: Matchboxes quantity on each container.
 * - `b_i`: Matches quantity on each matchbox.
 */

bool sortByMatchesQuantity(pair<int, int> p1, pair<int, int> p2) {
  return p1.second > p2.second;
}

int main() {
  int m, n;
  cin >> n;
  cin >> m;

  vector<pair<int, int>> M(m);
  for (int i = 0; i < m; i++) {
    cin >> M[i].first;
    cin >> M[i].second;
  }

  sort(M.begin(), M.end(), sortByMatchesQuantity);

  int c = n, t = 0;
  for (int i = 0; i < M.size(); i++) {
    if (c == 0)
      break;

    int mb = M[i].first, mm = M[i].second;
    if (mb <= c) {
      c -= mb;
      t += mb * mm;
    }
    else {
      int rest = c;
      c -= c;
      t += rest * mm;
    }
  }

  cout << t;

  return 0;
}
