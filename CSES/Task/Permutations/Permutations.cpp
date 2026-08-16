#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  vector<int> ans;
  for (int i = 1; i <= n; i += 2) {
    ans.push_back(i);
  }
  // even push --> lets say 3 {3,1,2} "NO SOLUTION"
  //  n=4 --> {1,3,2,4} this will say no solution but {3,1,4,2} possible
 
  for (int i = 2; i <= n; i += 2) {
    ans.push_back(i);
  }
 
  if (n == 4)
    ans = {3, 1, 4, 2};
 
  for (int i = 0; (int)i < ans.size() - 1; i++) {
    if (abs(ans[i] - ans[i + 1]) == 1) {
      cout << "NO SOLUTION";
      return 0;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
}