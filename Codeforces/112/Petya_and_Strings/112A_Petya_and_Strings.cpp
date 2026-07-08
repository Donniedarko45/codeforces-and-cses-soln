#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {

  // comp
  //
  // -1 for small if first string is less than second one
  //
  // 1 for if second string is less than for first one
  // 0 for equal

  string word1, word2;
  cin >> word1;
  cin >> word2;

  transform(word1.begin(), word1.end(), word1.begin(),
            [](unsigned char c) { return tolower(c); });

  transform(word2.begin(), word2.end(), word2.begin(),
            [](unsigned char c) { return tolower(c); });

  if (word1 < word2) {
    cout << -1 << endl;
  }
  if (word2 < word1) {
    cout << 1 << endl;
  }
  if (word1 == word2) {
    cout << 0;
  }
}