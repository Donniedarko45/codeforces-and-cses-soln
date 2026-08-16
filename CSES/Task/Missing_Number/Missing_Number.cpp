// missing number
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> arr;
  long long val;
  long long missSum = 0;
  for (int i = 0; i < n - 1; i++) {
    cin >> val;
    missSum += val;
 
    arr.push_back(val);
  }
 
  long long sum = 1LL * n * (n + 1) / 2;
  cout << sum - missSum;
}