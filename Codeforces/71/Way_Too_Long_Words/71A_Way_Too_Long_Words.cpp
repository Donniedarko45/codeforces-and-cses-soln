#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n-- > 0) {
    string words;
    cin >> words;

    if (words.size() > 10) {
      cout << words[0] << words.size() - 2 << words[words.size() - 1] << endl;
    } else {
      cout << words << endl;
    }
  }

  return 0;
}