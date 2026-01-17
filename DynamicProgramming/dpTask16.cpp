#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector <vector <int>> dp(n + 1, vector <int> (k));
    dp[1][1] = 2;
    for (int i = 2; i <= n; ++i) {
        for (int j = 0; j < k; ++j) {
            dp[i][1] += dp[i - 1][j];
            if (j > 1) {
                dp[i][j] = dp[i - 1][j - 1];
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < k; ++i) {
        ans += dp[n][i];
    }
    cout << ans;
}