#include <bits/stdc++.h>
using namespace std;
 
void minPick(vector<int> arr, long long desiredSum) {
  // long long n = ;
  const int inf = 1e9;
  vector<int> dp(desiredSum + 1, inf);
  dp[0] = 0; // we have to find min.. so thats why will explain to me also why
             // declared
 
  // state --> dp[i] will denote like take desiredSum= 5 so what is the minimum
  // Picks from array to find that desiredSum and dp[5] will be our answer
 
  // transistion equation --> dp[1]= if 1 found  thaan 1 otherwise -1
  for (int i = 1; i <= desiredSum; i++) {
    for (int coin : arr) {
      if (i >= coin) {
        dp[i] = min(dp[i], dp[i - coin] + 1);
      }
    }
  }
  if (dp[desiredSum] == inf)
    cout << -1;
  else {
    cout << dp[desiredSum];
  }
}
 
int main() {
  long long noOfCOins;
  cin >> noOfCOins;
  long long desiredSum;
  cin >> desiredSum;
  vector<int> arr(noOfCOins);
  int temp;
  for (int i = 0; i < noOfCOins; i++) {
    cin >> temp;
    arr[i] = temp;
  }
  minPick(arr, desiredSum);
}