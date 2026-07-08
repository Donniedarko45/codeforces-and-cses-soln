typedef long long ll;
/*
int solve(int n) {
  if (n == 0)
    return 1;
  if (n < 0)
    return 0;
  int ways = 0;
  for (int i = 1; i <= 6; i++) {
    ways += solve(n - i);
  }

  return ways;
}
*/

// state dp[i] hoga number of ways to make sum i
// transistion equation --> dp[i]= dp[i-1]+dp[i-2]+...dp[i-6];
// base condition -->  dp[0]=1

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
  int n;
  cin >> n;

  vector<long long> dp(n + 1, 0);

  dp[0] = 1;

  for (int i = 1; i <= n; i++) {
    for (int dice = 1; dice <= 6; dice++) {
      if (i - dice >= 0) {
        dp[i] = (dp[i] + dp[i - dice]) % MOD;
      }
    }
  }

  cout << dp[n] << endl;

  return 0;
}