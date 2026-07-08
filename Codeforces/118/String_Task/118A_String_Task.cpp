#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  // vowel delete
  // every consonants ke pehle "." lagao
 
  string input;
  cin >> input;
  for (auto &it : input) {
    it = tolower(it);
  }
  for (auto it : input) {
    if (it != 'a' && it != 'e' && it != 'i' && it != 'o' && it != 'u' && it!='y') {
      cout << "." << it;
    }
  }
}