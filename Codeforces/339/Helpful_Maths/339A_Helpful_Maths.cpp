#include <bits/stdc++.h>
using namespace std;

int main() {
  string r;
  cin >> r;
  string copyOne;
  // first copying only number
  for (int i = 0; i < r.size(); i += 2) {
    copyOne += r[i];
  }
  // sorting copyOne
  // r.back()--> front character
  // r.front()--> front character
  sort(copyOne.begin(), copyOne.end());
  for (int i = 0; i < copyOne.size() - 1; i++) {
    cout << copyOne[i] << "+";
  }
  cout << copyOne.back();
}