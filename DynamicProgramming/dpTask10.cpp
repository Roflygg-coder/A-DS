#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>

using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector <int> w(n), c(n);
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
    }
    for (int i = 0; i <n; ++i) {
        cin >> c[i];
    }
    vector <vector <int>> dp(n + 1, vector <int> (m + 1, -1));
    dp[0][0] = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (j >= w[i - 1]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i - 1]] + c[i - 1]);
            }
            dp[i][j] = max(dp[i][j], dp[i - 1][j]);
        }
    }
    int ind = -1;
    for (int j = 0; j <= m; ++j) {
        if (ind == -1 || (dp[n][j] >= dp[n][ind] && j <= m)) {
            ind = j;
        }
    }
    vector <int> ans;
    for (int i = n; i > 0; i--) {
        if (ind >= w[i - 1] and dp[i - 1][ind - w[i - 1]] + c[i - 1] >= dp[i - 1][ind]) {
            ans.push_back(i);
            ind -= w[i - 1];
        }
    }
    for (int i = ans.size(); i > 0; i--) {
        cout << ans[i - 1] << '\n';
    }
}