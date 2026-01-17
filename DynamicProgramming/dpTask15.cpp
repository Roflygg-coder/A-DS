#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector <int> dp(n);
    dp[4] = 10 * (v[0] + v[1] + v[2] + v[3] + v[4]);
    for (int i = 5; i < n; ++i) {
        dp[i] = max(dp[i - 5] + 10 * (v[i - 4] + v[i - 3] + v[i - 2] + v[i - 1] + v[i]), dp[i - 1]);
    }
    cout << dp[n - 1];
}