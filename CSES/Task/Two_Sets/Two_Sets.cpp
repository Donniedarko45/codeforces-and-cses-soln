#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long n;
  cin >> n;
  long long total = n * (n + 1) / 2;
  vector<long long> a_set, b_set;
  long long aSum = 0, bSum = 0;
  if (total % 2 != 0)
    cout << "NO";
  if (total % 2 == 0) {
    for (int i = n; i >= 1; i--) {
      if (aSum > bSum) {
        b_set.push_back(i);
        bSum += i;
      } else {
        a_set.push_back(i);
        aSum += i;
      }
    }
    if (aSum == bSum) {
      cout << "YES\n";
      cout << a_set.size() << endl;
      for (int it : a_set) {
        cout << it << " ";
      }
      cout << endl;
      cout << b_set.size() << endl;
      for (int it : b_set) {
        cout << it << " ";
      }
    }
  }
}