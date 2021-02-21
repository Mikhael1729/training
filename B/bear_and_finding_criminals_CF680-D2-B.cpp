#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, a;
  cin >> n;
  cin >> a;

  vector<int> T(n, 0);
  for (int i = 0; i < n; i++)
    cin >> T[i];

  int c = T[a - 1] == 1 ? 1 : 0;
  for (int i = a - 2, j = a; i >= 0 || j < n;) {
    if(i >= 0 && j < n) {
      if((T[i] == 1 && T[j] == 1))
        c += 2;
    } else if (i < 0 && j < n) {
      if(T[j] == 1)
        c++;
    } else if (i >= 0 && j >= n) {
      if(T[i] == 1)
        c++;
    }

    i--;
    j++;
  }

  cout << c;
}
