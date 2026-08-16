#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main() {
  string s;
  cin >> s;
  int n = s.size();
  int maxi = 1;
  int prevMaxi = maxi;
  for (int i = 1; i < n; i++) {
    if (s[i] == s[i - 1]) {
      prevMaxi++;
      cout << s[i] << endl;
    } else {
      prevMaxi = 1;
    }
 
    maxi = max(prevMaxi, maxi);
  }
  cout << maxi;
  return 0;
}