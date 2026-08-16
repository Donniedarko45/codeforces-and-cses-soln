// increasing arrayy
//
#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<long long> arr;
  long long n;
  cin >> n;
  int val;
  for (int i = 0; i < n; i++) {
    cin >> val;
    arr.push_back(val);
  }
  /*
  long long noOfMove = 0;
  for (int i = 1; i < n; i++) {
    long long addSum = 0;
    if (arr[i] < arr[i - 1]) {
      addSum = arr[i - 1] - arr[i];
      noOfMove += addSum;
      arr[i] = arr[i] + addSum;
    } else {
      continue;
    }
  }
  */
  long long ans = 0;
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1]) {
      ans += arr[i - 1] - arr[i];
      arr[i] = arr[i - 1];
    }
  }
  cout << ans << endl;
}