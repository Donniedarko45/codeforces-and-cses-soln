#include <bits/stdc++.h>
#include <cmath>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  int MOD = 1e9 + 7;
  long long cal = pow(2, n);
  cout << cal % MOD;
}