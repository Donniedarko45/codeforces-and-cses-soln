#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n, k;
  cin >> n;
  cin >> k;
  long long power = 1;
  if (k == 1 || n == 1) {
    cout << n;
    return 0;
  }

  long long ans = 1;
  while (power <= n) {
    power = power * 2;
  }
  cout << power - 1;
}