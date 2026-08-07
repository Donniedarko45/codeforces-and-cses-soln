#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int solve(long long n) {
  int ans = 0;
  while (n > 0) {
    string a = to_string(n);
    char maximumDigi = '0';
    for (auto i : a) {
      maximumDigi = max(maximumDigi, i);
    }
    ans++;
 
    n -= maximumDigi - '0';
  }
  return ans;
}
 
int main() {
  long long n;
  cin >> n;
  int ans = solve(n);
  cout << ans;
}