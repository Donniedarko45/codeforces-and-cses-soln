#include <bits/stdc++.h>
#include <vector>
using namespace std;
const int MOD = 1e9 + 7;
void solve(int n, int x, vector<int> &coin) {
 
  vector<int> dp(x + 1);
 
  // state--> dp[x] no of ways to achive x
  //  transistion equation --> i goes from 1 to n where dp[k-ci]
  dp[0] = 1;
  for (int i = 1; i <= x; i++) {
    for (int j = 0; j < n; j++) {
      if (coin[j] <= i) {
        dp[i] = (dp[i] + dp[i - coin[j]]) % MOD;
      }
    }
  }
  cout << dp[x] << endl;
}
 
int main() {
  int n, x;
  cin >> n >> x;
  vector<int> coins(n);
  int temp;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    coins[i] = temp;
  }
  solve(n, x, coins);
  return 0;
}