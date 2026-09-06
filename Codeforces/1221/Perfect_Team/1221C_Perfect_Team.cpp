#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int c, m, s;
    cin >> c >> m >> s;
    /*
        int l = 0;
        int r = min(c, m) + 1;

        while (l + 1 < r) {
          int mid = l + (r - l) / 2;

          if (mid <= c && mid <= m && 3 * mid <= c + m + s) {
            l = mid;
          } else {
            r = mid;
          }
        }

        cout << l << '\n';
      */
    int ans = min(c, m);
    ans = min(ans, (c + m + s) / 3);
    cout << ans << endl;
  }
}