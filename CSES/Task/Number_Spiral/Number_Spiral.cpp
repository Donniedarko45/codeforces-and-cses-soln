#include <iostream>
 
using namespace std;
 
#define ll long long
 
int main() {
  // Optimize standard I/O operations for performance
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t;
  if (cin >> t) {
    while (t--) {
      ll y, x;
      cin >> y >> x;
 
      if (y > x) {
        // For rows (y > x):
        // If the row number is EVEN, numbers decrease as x increases (starts at
        // y*y)
        if (y % 2 == 0) {
          cout << (y * y) - x + 1 << "\n";
        }
        // If the row number is ODD, numbers increase as x increases
        else {
          cout << ((y - 1) * (y - 1)) + x << "\n";
        }
      } else {
        // For columns (x >= y):
        // If the column number is ODD, numbers decrease as y increases (starts
        // at x*x)
        if (x % 2 == 1) {
          cout << (x * x) - y + 1 << "\n";
        }
        // If the column number is EVEN, numbers increase as y increases
        else {
          cout << ((x - 1) * (x - 1)) + y << "\n";
        }
      }
    }
  }
  return 0;
}