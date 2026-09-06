#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    
    long long total_popcount = 0;
    long long weight = 1;
    
    while (n > 0 && weight <= n) {
        long long max_take = k;
        long long available = n / weight;
        long long take = min(max_take, available);
        
        total_popcount += take;
        n -= take * weight;
        
        if (weight > n / 2) {
            break;
        }
        weight *= 2;
    }
    
    cout << total_popcount << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}