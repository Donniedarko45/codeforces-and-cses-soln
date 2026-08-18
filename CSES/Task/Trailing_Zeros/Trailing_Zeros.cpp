// trailing zeroes
#include <bits/stdc++.h>
using namespace std;
int main() {
 
  int n;
  cin >> n;
  int answ = 0;
  for (int m = 5; m <= n; m *= 5) {
    answ += n / m;
  }
  cout << answ;
}