#include <bits/stdc++.h>
#include <cassert>
using namespace std;
 
void input() {
  long long row, col;
  cin >> row >> col;
  // layer calculation
  //
  long long layer = max(row, col);
 
  if (col == layer) {
    cout << (layer - 1) * (layer - 1) + row << "\n";
  } else {
    cout << (layer * layer) - col + 1 << "\n";
  }
  /*
    if (row % 2 == 0) {
      int traversingIncol = 1; // 1 based indexing curr at 1
      for (int i = row * row; i >= ((row - 1) * (row - 1) + 1); i--) {
        if (traversingIncol == col) {
          cout << i << " ";
          break;
        }
        traversingIncol++;
      }
    //  cout << row * row - col + 1 << " ";
    }
 
    if (row % 2 != 0) {
      int traversingIncol = 1;
      for (int i = ((row - 1) * (row - 1) + 1); i <= row * row; i++) {
        if (traversingIncol == col) {
          cout << i << " ";
          break;
        }
        traversingIncol++;
      }
      cout << (row - 1) * (row - 1) + col << " ";
    }
  */
}
 
int main() {
 
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    input();
  }
}