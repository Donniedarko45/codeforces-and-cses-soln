#include <bits/stdc++.h>
#include <vector>
using namespace std;
const int MOD = 1e9 + 7;
int solve(int n, vector<string> &grid) {
  vector<vector<int>> dp(n, vector<int>(n, 0));
  if (grid[0][0] == '.')
    dp[0][0] = 1;
  else
    dp[0][0] = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 0 && j == 0)
        continue;
      if (grid[i][j] == '*') {
        dp[i][j] = 0;
        continue;
      }
 
      if (i > 0) {
        dp[i][j] += dp[i - 1][j];
      }
      if (j > 0) {
        dp[i][j] += dp[i][j - 1];
      }
      dp[i][j] = dp[i][j] % MOD;
    }
  }
  return dp[n - 1][n - 1];
}
 
int main() {
  int n;
  cin >> n;
  int temp;
  vector<string> grid(n);
  for (int i = 0; i < n; i++) {
    cin >> grid[i];
  }
 
  int ans = solve(n, grid);
  cout << ans;
}