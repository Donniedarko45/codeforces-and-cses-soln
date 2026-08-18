#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    long long size = n * n;
    // possible location..
    long long allWasys = size * (size - 1) / 2;
    long long badWays = 0;
    // 8,6,4,3,2
    badWays += 8 * (n - 4) * (n - 4); // 8
    badWays += 2 * 4;                 // for 2
    badWays += 3 * 8;
    badWays += 6 * (n - 4) * 4;
    badWays += 4 * (n - 3) * 4;
    badWays = badWays / 2;
    cout << allWasys - badWays << "\n";
  }
}