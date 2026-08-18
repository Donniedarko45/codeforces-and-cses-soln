#include <bits/stdc++.h>
using namespace std;
 
void test_input() {
  long long a, b;
  cin >> a >> b;
  if ((a + b) % 3 == 0 && a <= 2 * b && b <= 2 * a) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
 
int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    test_input();
  }
  return 0;
}