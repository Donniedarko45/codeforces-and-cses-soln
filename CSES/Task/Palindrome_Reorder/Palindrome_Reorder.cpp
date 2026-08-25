#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  cin >> s;
 
  vector<int> freq(26, 0);
 
  for (char c : s) {
    freq[c - 'A']++;
  }
 
  int n = s.size();
  int odd = 0;
  int oddChar = -1;
 
  for (int i = 0; i < 26; i++) {
    if (freq[i] % 2 == 1) {
      odd++;
      oddChar = i;
    }
  }
 
  if (odd > 1 || (n % 2 == 0 && odd == 1)) {
    cout << "NO SOLUTION";
    return 0;
  }
 
  string ans(n, ' ');
 
  int left = 0;
  int right = n - 1;
 
  for (int i = 0; i < 26; i++) {
    while (freq[i] >= 2) {
      ans[left] = ans[right] = 'A' + i;
      left++;
      right--;
      freq[i] -= 2;
    }
  }
 
  if (oddChar != -1) {
    ans[left] = 'A' + oddChar;
  }
 
  cout << ans;
 
  return 0;
}