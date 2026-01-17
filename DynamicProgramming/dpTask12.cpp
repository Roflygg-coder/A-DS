//
// Created by Miron on 16.01.2026.
//#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <bitset>

using namespace std;

using ll = long long;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l;
    cin >> l >> n;
    vector <int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector <int> v1(n + 1);
    v1[0] = v[0];
    for (int i = 1; i < n; i++) {
        v1[i] = v[i] - v[i - 1];
    }
    v1[n] = l - v[n - 1];
    vector <vector <int>> dp(n + 1, vector <int>(n + 1, 1e9));
    for (int i = 0; i <= n; ++i) {
        dp[i][i] = 0;
    }
    for (int k = 1; k <= n; k++) {
        for (int l = 0; l <= n; l++) {
            int sum = 0;
            int r = l + k;
            for (int p = l; p <= r; p++) {
                sum += v1[p];
            }
            for (int i = l; i <= r; i++) {
                if (i + 1 <= n) {
                    dp[l][r] = min(dp[l][r], dp[l][i] + dp[i + 1][r] + sum);
                }
            }
        }
    }
    cout << dp[0][n] << endl;
}